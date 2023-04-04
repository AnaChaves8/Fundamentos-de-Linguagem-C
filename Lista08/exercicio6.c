#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operador;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    switch(operador) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f", resultado);
            break;
        case '/':
            if (num2 == 0) {
                printf("Erro: divisão por zero");
            } else {
                resultado = num1 / num2;
                printf("Resultado: %.2f", resultado);
            }
            break;
        default:
            printf("Erro: operador inválido");
    }

    return 0;
}