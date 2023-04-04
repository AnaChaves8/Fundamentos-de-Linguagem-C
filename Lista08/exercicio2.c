#include <stdio.h>
#include <math.h>

int main() {
    float base, altura, perimetro, area, diagonal;

    printf("Digite a base do retangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    perimetro = 2 * (base + altura);
    area = base * altura;
    diagonal = sqrt(pow(base, 2) + pow(altura, 2));

    printf("\nPerimetro: %.2f", perimetro);
    printf("\nArea: %.2f", area);
    printf("\nDiagonal: %.2f", diagonal);

    return 0;
}