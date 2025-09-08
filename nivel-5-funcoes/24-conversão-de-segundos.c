// 24.Conversão de segundos: Crie uma função que receba segundos e retorne horas, minutos e segundos.
#include <stdio.h>

int conversao(int segundos){
    int h, m, s, resto, resultado;

    h = segundos / 3600;
    resto = segundos % 3600;
    m = resto / 60;
    s = resto % 60;

    printf("%d:%d:%d\n", h, m, s);
    return(resultado);
} 

int main(){
    int segundos, resultado;

    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");
    printf("Digite a quantidade de segundos a ser convertida: ");
    scanf("%d", &segundos);

    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");
    resultado = conversao(segundos);
    printf("<<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>><<>>\n");

    return 0;
}