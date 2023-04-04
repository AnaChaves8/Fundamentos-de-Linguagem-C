#include <stdio.h>

int contarOcorrencias(int vetor[], int tamanho, int chave) {
    int i, cont = 0;

    for(i = 0; i < tamanho; i++) {
        if(vetor[i] == chave) {
            cont++;
        }
    }

    return cont;
}

#define TAMANHO 20

int main() {
    int vetor[TAMANHO], chave, numOcorrencias, i;

    printf("Digite os %d elementos do vetor:\n", TAMANHO);
    for(i = 0; i < TAMANHO; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor a ser pesquisado:\n");
    scanf("%d", &chave);

    numOcorrencias = contarOcorrencias(vetor, TAMANHO, chave);

    printf("O valor %d aparece %d vezes no vetor.\n", chave, numOcorrencias);

    return 0;

}   