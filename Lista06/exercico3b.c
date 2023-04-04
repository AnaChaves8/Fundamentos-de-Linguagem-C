// #include <stdio.h>
// #include <string.h>

// typedef struct 
// {
//   char titulo[25];
//   int duracao;
//   char secoes[5][6];
// } Filme;

// int main(){
//   Filme f1;

//   strcpy(f1.titulo, "Amores Eletrônicos");
//   f1.duracao = 120;
 
//   strcpy(f1.secoes[0], "10:00");
//   strcpy(f1.secoes[1], "13:30");
//   strcpy(f1.secoes[2], "15:40");
//   strcpy(f1.secoes[3], "18:00");
//   strcpy(f1.secoes[4], "21:30");
  
//   printf("Título: %s\n", f1.titulo);
//   printf("Duração: %d minutos\n", f1.duracao);
//   printf("Seções: ");
//   for (int i = 0; i < 5; i++) {
//     printf("%s ", f1.secoes[i]);
//   }
//   printf("\n");

//   return 0;
// }

#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int comparar(const void * a, const void * b) {
    return (*(int*)a - *(int*)b);
}

int main()
{
    int vetor[TAM] = {4, 8, 1, 6, 3, 2, 7, 9, 5, 0};
    int i;

    // antes da ordenação
    printf("Vetor antes da ordenação: \n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }

    // função sort
    

    // após a ordenação
    printf("\n\nVetor após a ordenação: \n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}







