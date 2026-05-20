#include <stdio.h>

int main(){

int numero1;
int numero2;
int soma;

    printf("insira um numero\n");
    scanf("%d", &numero1);

    printf("insira outro numero\n");
    scanf("%d", &numero2);

    soma = numero1 + numero2;

    printf("a soma e: %d\n", soma);

    return 0;
}