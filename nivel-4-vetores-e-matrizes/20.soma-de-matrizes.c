//20.Soma de matrizes: Leia duas matrizes 2x2 e calcule a soma.
#include <stdio.h>

int main(){
    int i, j;
    int soma1, soma2, somaTotal;
    int matriz1[2][2];
    int matriz2[2][2];

    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");

    for(i = 0; i <= 1; i++){
        for(j = 0; j <= 1; j++){
            matriz1[i][j] = 1;
            soma1 += matriz1[i][j];
            printf("%d ",matriz1[i][j]);
        }
        printf("\n");
    }

    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");

    for(i = 0; i <= 1; i++){
        for(j = 0; j <= 1; j++){
            matriz2[i][j] = 2;
            soma2 += matriz2[i][j];
            printf("%d ",matriz2[i][j]);
        }
        printf("\n");
    }

    somaTotal = soma1 + soma2;
    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");
    printf("Soma do conteúdo da primeira matriz: %d\n", soma1);
    printf("Soma do conteúdo da segunda matriz: %d\n", soma2);
    printf("Total: %d\n", somaTotal);
    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");

    
    

    return 0;
}