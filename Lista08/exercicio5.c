#include <stdio.h>

int main() {
    float preco_alcool, preco_gasolina, rag;

    printf("Digite o preço do litro do álcool: ");
    scanf("%f", &preco_alcool);

    printf("Digite o preço do litro da gasolina: ");
    scanf("%f", &preco_gasolina);

    rag = preco_alcool / preco_gasolina;

    printf("\nRazão álcool/gasolina: %.2f", rag);

    if (rag < 0.7) {
        printf("\nÁlcool é mais vantajoso");
    } else {
        printf("\nGasolina é mais vantajosa");
    }

    return 0;
}





