#include <stdio.h>
#include <math.h>

#define NUM_ALUNOS 10

int main() {
    char nome[NUM_ALUNOS][50];
    float nota[NUM_ALUNOS];
    float media = 0, desvio[NUM_ALUNOS], desvio_quadrado[NUM_ALUNOS], soma_desvio_quadrado = 0, variancia, desvio_padrao;

    
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Digite o nome do aluno %d: ", i+1);
        scanf("%s", nome[i]);
        printf("Digite a nota final do aluno %d: ", i+1);
        scanf("%f", &nota[i]);
        media += nota[i];
    }

    
    media /= NUM_ALUNOS;

    
    for (int i = 0; i < NUM_ALUNOS; i++) {
        desvio[i] = nota[i] - media;
        desvio_quadrado[i] = pow(desvio[i], 2);
        soma_desvio_quadrado += desvio_quadrado[i];
    }

    
    variancia = soma_desvio_quadrado / NUM_ALUNOS;
    desvio_padrao = sqrt(variancia);

    
    printf("\nMédia da turma: %.2f", media);
    printf("\nDesvio de cada aluno em relação à média:");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("\n%s: %.2f", nome[i], desvio[i]);
    }
    printf("\nQuadrado do desvio de cada aluno em relação à média:");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("\n%s: %.2f", nome[i], desvio_quadrado[i]);
    }
    printf("\nVariância: %.2f", variancia);
    printf("\nDesvio padrão: %.2f", desvio_padrao);

    return 0;
}