// 21.Função de soma: Crie uma função que receba dois inteiros e retorne a soma.
#include <stdio.h>
int soma(int n1, int n2){
    int resultado;
    resultado = n1 + n2;
    return (resultado); 
}

int main(){
    int v1, v2, resultado;

    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");
    printf("Insira o primeiro número a ser somado: ");
    scanf("%d", &v1);
    printf("Insira o segundo número a ser somado: ");
    scanf("%d", &v2);
    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");

    resultado = soma(v1, v2);

    printf("Resultado da soma = %d\n", resultado);
    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");

    return 0;
}