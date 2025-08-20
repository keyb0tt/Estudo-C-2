#include <stdio.h>

int main()
{
  int n1;


  printf("Insira o numero\n");
  scanf("%d", &n1);

  if(n1 % 2 == 0){
    printf("Esse numero e par!\n");
  } else {
    printf("Esse numero e impar!\n");
  }
  return 0;
}