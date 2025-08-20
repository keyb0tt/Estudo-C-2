#include <stdio.h>

int main()
{
  float tempC;
  float tempF;

  printf("<---------------CONVERSOR DE TEMPERATURA--------------->\n");
  printf("Insira a temperatura em graus celsius: \n");
  scanf("%f", &tempC);

  tempF = (tempC * 9/5) + 32;

  printf("%.1f graus Celsius e igual a %.0f Fahrenheit\n", tempC, tempF);
  printf("<-------------------FIM DO PROGRAMA------------------->\n");
  return 0;
}