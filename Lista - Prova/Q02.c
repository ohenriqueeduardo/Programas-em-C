#include<stdio.h>

int main(){

    int x, d1, d2, d3, d4, d5;

    printf("Insira o numero de cinco digitos: ");
    scanf("%d", &x);

    d1 = x/10000;
    x %= 10000;

    d2 = x/1000;
    x %=1000;

    d3 = x/100;
    x %= 100;

    d4 = x/10;
    x %= 10;

    d5 = x/1;

    printf("\nO numero formatado fica %d   %d   %d   %d   %d", d1, d2, d3, d4, d5);
}