#include<stdio.h>
#include<math.h>

int main(){
    float x1, y1, x2, y2, dab, dab2, som, sqr;

    printf("Insira a primeira coordenada: ");
    scanf("%f, %f", &x1, &y1);

    printf("Insira a segunda coordenada: ");
    scanf("%f, %f", &x2, &y2);

    dab = pow((x1 - x2), 2);
    dab2 = pow((y1 - y2), 2);

    som = dab + dab2;
    sqr = sqrt(som);

    printf("\nAs coordenadas informadas foram: P1 (%.f, %.f) e P2 (%.f, %.f)", x1, y1, x2, y2);
    printf("\nA distancia entre estes pontos e de: DAB (%.2f)", sqr);
}