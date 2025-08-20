#include <stdio.h>

int main()
{
  float n1;
  float n2;
  float n3;

  float media;

  printf("<---------------CALCULADORA DE MEDIA--------------->\n");
  printf("Insira a primeira nota:\n");
  scanf("%f", &n1);
  printf("Insira a segunda nota:\n");
  scanf("%f", &n2);
  printf("Insira a terceira nota:\n");
  scanf("%f", &n3);

  media = (n1 + n2 + n3) / 3;
  printf("Sua media foi de: %.1f\n", media);
  printf("<-----------------FIM DO PROGRAMA----------------->\n");

  return 0;
}