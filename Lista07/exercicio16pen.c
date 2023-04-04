#include <stdio.h>

float calcular_nota_final(float p1, float p2, float p3, float notas[]) {
    float nota_final = ((notas[0] + notas[1] + notas[2]) / 3.0) * p1
                     + ((notas[3] + notas[4] + notas[5] + notas[6] + notas[7]) / 5.0) * p2
                     + notas[8] * p3;
    return nota_final;
}

int main() {
    float p1, p2, p3;
    float notas[9];
    
    printf("Informe os pesos para cada avaliacao:\n");
    printf("Peso para provas (P1): ");
    scanf("%f", &p1);
    printf("Peso para listas de exercicios (P2): ");
    scanf("%f", &p2);
    printf("Peso para projeto de curso (P3): ");
    scanf("%f", &p3);
    
    while (1) {
        printf("\nInforme as notas do aluno:\n");
        for (int i = 0; i < 3; i++) {
            printf("Nota da prova %d: ", i+1);
            scanf("%f", &notas[i]);
        }
        for (int i = 0; i < 5; i++) {
            printf("Nota da lista de exercicios %d: ", i+1);
            scanf("%f", &notas[3+i]);
        }
        printf("Nota do projeto de curso: ");
        scanf("%f", &notas[8]);
        
        float nota_final = calcular_nota_final(p1, p2, p3, notas);
        printf("\nNota final: %.2f\n", nota_final);
        
        char continuar;
        printf("\nDeseja continuar? (s/n): ");
        scanf(" %c", &continuar);
        if (continuar == 'n') {
            break;
        }
    }
    
    return 0;
}