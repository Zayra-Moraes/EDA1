#include <stdio.h>
// PODE USAR LAÇOS
int verificaBissexto(int *ano)
{
  if (*ano % 400 == 0)
    return 1;
  if ((*ano % 4 == 0) && (*ano % 100 != 0))
    return 1; // bissexto
  return 0;   // NAO bissexto
}
// DIMINUIR OS DIAS ATE A QUANTIDADE DE DIAS RESTANTES FICAR MENOR QUE A
// QUANTIADE DE DIA DE UM MES DEPOIS VER EM QUE MES PAROU E EM QUE DIA E POR FIM PRINTAR AS INFORMAÇÕES
int calculaDiaMes(int *dias, int *ano)
{

  int *mes = 1, diaMes;
  if (*dias > (verificaBissexto(ano) ? 366 : 365) || *dias < 1)
  {
    return 0;
  }
  while (*mes <= 12)
  {

    switch (*mes)
    {
    case 4:
    case 6:
    case 9:
    case 11:
      diaMes = 30;
      break;

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      diaMes = 31;
      break;

    case 2:
      diaMes = verificaBissexto(ano) ? 29 : 28;
      break; // sai do loop do sitch case

    default:
    }

    if (*dias > diaMes)
    {
      *dias -= diaMes;
      (*mes)++;
    }
    else
    {
      return;
    }
  }
}

int main()
{
  int dias, ano;
  scanf("%d %d", &dias, &ano);

  int mes = calculaDiaMes(&dias, &ano);
  if (mes != 0)
  {
    printf("%02d/%02d/%d", dias, mes, ano);
  }
  else
    printf("Entradas invalidas!");

  return 0;
}