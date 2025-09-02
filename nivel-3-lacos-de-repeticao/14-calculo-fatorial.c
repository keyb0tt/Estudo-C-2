#include <stdio.h>

int main()
{
  int fatorial = 1;
  int i;

  printf("Insira o número que será calculado o fatorial:\n");
  scanf("%d", &i);

  while(i > 1){
    fatorial *= i;
    i--;
  }

  printf("O Resultado é de: %d", fatorial);
}