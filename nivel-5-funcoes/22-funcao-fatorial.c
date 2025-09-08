// 22.Função fatorial: Implemente o cálculo do fatorial usando função.
#include <stdio.h>

int funcFatorial(int number){
  int fatorial = 1;

  while(number > 1){
    fatorial *= number;
    number--;
  }

  return(fatorial);
}

int main(){
    int fatorial, nFatorial;

    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");
    printf("Digite o número desejado para obter seu fatorial: ");
    scanf("%d", &nFatorial);
    
    fatorial = funcFatorial(nFatorial);
    
    printf("%d! é igual a: %d\n", nFatorial, fatorial);
    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");


    return 0;
}