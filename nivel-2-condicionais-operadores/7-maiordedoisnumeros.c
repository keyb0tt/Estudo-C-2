#include <stdio.h>

int main()
{
  int n1;
  int n2;

  printf("<---------------MAIOR DE DOIS NUMEROS--------------->\n");
  printf("Insira o primeiro numero: ");
  scanf("%d", &n1);
  printf("Insira o segundo numero: ");
  scanf("%d", &n2);

  if (n1 > n2)
  {
    printf("O maior numero enviado foi: %d \n", n1);
  }
  else
  {
    printf("O maior numero enviado foi: %d \n", n2);
    printf("<-----------------FIM DO PROGRAMA------------------>\n");
  }

  return 0;
}