//19.Matriz identidade: Leia N e crie uma matriz identidade NxN.
#include <stdio.h>

int main(){
    int varN;

    printf("\nDigite a dimensão da matriz: \n");
    scanf("%d", &varN);

    int matriz[varN][varN];

    printf("\n%d", varN);

    return 0;
}