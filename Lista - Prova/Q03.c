#include<stdio.h>

int main(){

    int s, d, h, m;

    printf("Insira o tempo em segundos: ");
    scanf("%d", &s);

    d = s/86400;
    h = s/3.600;
    m = s/60;

    printf("\nO tempo em dias e de: %d dias", d);
    printf("\nO tempo em horas e de: %d horas", h);
    printf("\nO tempo em minutos e de: %d minutos", m);
    printf("\nO tempo em segundos e de: %d segundos", s);
}