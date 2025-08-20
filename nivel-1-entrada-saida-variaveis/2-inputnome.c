#include <stdio.h>

int main()
{
  char nome[20];

  printf("Qual o seu nome?\n");
  scanf("%s", &nome);
  printf("Olá %s!", nome);

  return 0;
}