#include <stdio.h>

int main()
{
  int operador;
  float n1, n2;

  printf("<---------------CALCULADORA SIMPLES--------------->\n");
  printf("Insira o primeiro numero a ser calculado: ");
  scanf("%f", &n1);
  printf("Insira o segundo numero a ser calculado: ");
  scanf("%f", &n2);
  printf("Insira o operador a ser usado (1: +) (2: -) (3: *) (4: /): ");
  scanf("%d", &operador);

  if (operador == 1)
  {
    printf("%.1f + %.1f = %.2f\n", n1, n2, (n1 + n2));
  }
  else if (operador == 2)
  {
    printf("%.1f - %.1f = %.2f\n", n1, n2, (n1 - n2));
  }
  else if (operador == 3)
  {
    printf("%.1f * %.1f = %.2f\n", n1, n2, (n1 * n2));
  }
  else if (operador == 4)
  {
    printf("%.1f * %.1f = %.2f\n", n1, n2, (n1 / n2));
  }

  printf("<-----------------FIM DO PROGRAMA----------------->\n");
  return 0;
}