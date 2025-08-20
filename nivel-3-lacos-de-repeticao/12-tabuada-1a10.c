#include <stdio.h>

int main()
{
  int n1, i;

  printf("<--------------------TABUADA-------------------->\n");
  printf("Insira um numero para obter sua tabuada: ");
  scanf("%d", &n1);

  for (i = 1; i <= 10; i++)
  {
    printf("%d x %d = %d\n",i, n1, (i * n1));
  }

  printf("<-----------------FIM DO PROGRAMA---------------->\n");

  return 0;
}