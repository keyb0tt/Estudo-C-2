// 23.Função primo: Crie uma função que retorne se um número é primo.
#include <stdio.h>

int primoChecker(int numero){
    int resultado, ehPrimo = 1;
    if (numero < 2){
        ehPrimo = 0;
    } else {
        for (int i = 2; i < numero; i++){
            if (numero % i == 0){
              ehPrimo = 0;
              break;
            }
        }
    }
    return(ehPrimo);
  }

int main(){
    //ehPrimo = 0: primo;
    int numero, ehPrimo;
    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");
    printf("Insira um número para verificar se ele é primo: ");
    scanf("%d", &numero);

    ehPrimo = primoChecker(numero);

    if(ehPrimo){
        printf("\n%d é um número primo!\n", numero);
    } else {
        printf("%d não é um número primo!\n", numero);
    }
    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");

    return 0;
}
