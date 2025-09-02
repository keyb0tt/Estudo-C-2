#include <stdio.h>

int main()
{
  int numero, i, ehPrimo = 1;

  printf("Digite um número:\n");
  scanf("%d", &numero);

  if (numero < 2)
  {
    ehPrimo = 0;
  }
  else
  {
    for (i = 2; i < numero; i++)
    {
      if (numero % i == 0)
      {
        ehPrimo = 0;
        break;
      }
    }
  }

  if (ehPrimo)
  {
    printf("%d é um número primo!\n", numero);
  }
  else
  {
    printf("%d não é um número primo!\n", numero);
  }

  return 0;
}