#include <stdio.h>

int main()
{
  float n1;
  float n2;
  float soma;

  printf("<---------------SOMA DE NUMEROS--------------->\n");
  printf("Insira o primeiro numero\n");
  scanf("%f", &n1);

  printf("Insira o segundo numero\n");
  scanf("%f", &n2);

  soma = n1 + n2;

  printf("O resultado de %.2f + %.2f e igual a: %.2f\n", n1, n2, soma);
  printf("<---------------FIM DO PROGRAMA--------------->\n");

  return 0;
}