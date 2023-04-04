#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    printf("Digite o primeiro lado do triângulo: ");
    scanf("%f", &lado1);

    printf("Digite o segundo lado do triângulo: ");
    scanf("%f", &lado2);

    printf("Digite o terceiro lado do triângulo: ");
    scanf("%f", &lado3);

    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        if (lado1 == lado2 && lado2 == lado3) {
            printf("O triângulo é equilátero\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("O triângulo é isósceles\n");
        } else {
            printf("O triângulo é escaleno\n");
        }
    } else {
        printf("Os lados informados não formam um triângulo\n");
    }

    return 0;
}