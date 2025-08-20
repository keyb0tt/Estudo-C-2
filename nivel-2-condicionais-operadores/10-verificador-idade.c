#include <stdio.h>

int main()
{
  int idade;

  printf("<---------------VERIFICADOR DE IDADE--------------->\n");
  printf("Insira a sua idade: ");
  scanf("%d", &idade);

  if (idade >= 60)
  {
    printf("Você é idoso\n");
  }
  else if (idade >= 18)
  {
    printf("Você é adulto\n");
  }
  else if (idade >= 14)
  {
    printf("Você é adolescente\n");
  }
  else
  {
    printf("Você é criança\n");
  }
  printf("<-----------------FIM DO PROGRAMA----------------->\n");

  return 0;
}