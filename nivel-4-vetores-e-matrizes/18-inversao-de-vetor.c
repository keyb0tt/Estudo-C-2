//18.Inversão de vetor: Leia um vetor e mostre seus elementos na ordem inversa.
#include <stdio.h>

int main(){
    int vetor[3] = {1, 2, 3};
    int i = 3;

    for(i = 2; i >= 0; i--){
        printf("O %dº elemento do vetor é: %d\n", i + 1, vetor[i]);
    }

    return 0;
}