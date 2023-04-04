#include <stdio.h>

float calcular_nota_final(float notas_mensais[], float nota_final) {
  
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (notas_mensais[i] < notas_mensais[j]) {
                float temp = notas_mensais[i];
                notas_mensais[i] = notas_mensais[j];
                notas_mensais[j] = temp;
            }
        }
    }
   
    float nota_final_calculada = nota_final;
    for (int i = 0; i < 3; i++) {
        nota_final_calculada += notas_mensais[i];
    }
    return nota_final_calculada;
}

char calcular_conceito(float nota_final) {
    char conceito;
    if (nota_final >= 90) {
        conceito = 'A';
    } else if (nota_final >= 80) {
        conceito = 'B';
    } else if (nota_final >= 70) {
        conceito = 'C';
    } else if (nota_final >= 60) {
        conceito = 'D';
    } else if (nota_final >= 40) {
        conceito = 'E';
    } else {
        conceito = 'F';
    }

    return conceito;
}

int main() {
    float notas_mensais[4], nota_final;
    char opcao;
    do {

        printf("Digite as notas mensais e a nota final:\n");
        scanf("%f%f%f%f%f", &notas_mensais[0], &notas_mensais[1], &notas_mensais[2], &notas_mensais[3], &nota_final);

        float nota_final_calculada = calcular_nota_final(notas_mensais, nota_final);

        char conceito = calcular_conceito(nota_final_calculada);

        printf("Nota final: %.2f\n", nota_final_calculada);
        printf("Conceito: %c\n", conceito);

        printf("Digite 's' para continuar ou 'n' para sair:\n");
        scanf(" %c", &opcao);
    } while (opcao == 's');
    return 0;
}