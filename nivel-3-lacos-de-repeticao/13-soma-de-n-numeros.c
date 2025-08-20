#include <stdio.h>

int main()
{
  int nRep, nSoma, i, rep;

  printf("<---------------SOMA DE N NUMEROS--------------->\n");
  printf("Insira um numero para ser repetido: ");
  scanf("%d", &nRep);
  printf("Insira o numero de vezes que ele sera repetido: ");
  scanf("%d", &rep);

  for (i = 1; i <= rep; i++)
  {
    nRep = nRep + nRep;
    printf("%d \n", nRep);
  }

  printf("<----------------FIM DO PROGRAMA---------------->\n");

  return 0;
}