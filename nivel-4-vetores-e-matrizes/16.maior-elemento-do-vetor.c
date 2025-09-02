#include <stdio.h>

int main(){
    int i, maior;
    int numeros[5] = {1, 21, 30, 16, 24};

    maior = numeros[0];

    for(i = 0; i < 5; i++){
        if(numeros[i] > maior){
            maior = numeros[i];
        }
    }

    printf("O maior número do vetor é: %d\n", maior);

    return 0;
}