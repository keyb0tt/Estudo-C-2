//17.Média dos elementos: Leia N números em um vetor e calcule a média.

#include <stdio.h>

int main(){
    float notas[3];
    float somaNotas, calcMedia;
    int i;

    for(i = 1; i <= 3; i++){
        printf("Digite a %dª nota:\n", i);
        scanf("%f", &notas[i]);
    }

    //Somando as notas e calculando a média
    for(i = 1; i <= 3; i++){
        somaNotas += notas[i];

        if(i == 3){
            calcMedia = somaNotas / 3;
        }
    }

    printf("A sua média foi de: %.1f\n", calcMedia);

    return 0;
}