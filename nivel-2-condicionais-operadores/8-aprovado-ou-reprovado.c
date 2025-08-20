#include <stdio.h>

int main()
{
  float nota1, nota2, nota3, media;

  printf("<---------------APROVADO OU REPROVADO--------------->\n");
  printf("Insira sua primeira nota: ");
  scanf("%f", &nota1);
  printf("Insira sua segunda nota: ");
  scanf("%f", &nota2);
  printf("Insira sua terceira nota: ");
  scanf("%f", &nota3);

  media = (nota1 + nota2 + nota3) / 3;

  printf("\nA sua media foi de: %.1f\n", media);

  if (media >= 7)
  {
    printf("VOCE FOI APROVADO!! \n");
  }
  else
  {
    printf("VOCE FOI REPROVADO!! \n");
  }

  printf("<------------------FIM DO PROGRAMA------------------>\n");

  return 0;
}