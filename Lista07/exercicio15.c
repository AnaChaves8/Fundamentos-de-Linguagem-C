#include <stdio.h>

float calcular_nota_final(float notas_provas[], float notas_listas[], float nota_projeto) {
    float media_provas = 0, media_listas = 0;

    for (int i = 0; i < 3; i++) {
        media_provas += notas_provas[i];
    }
    media_provas /= 3;

    for (int i = 0; i < 5; i++) {
        media_listas += notas_listas[i];
    }
    media_listas /= 5;

    float nota_final = (media_provas + media_listas + nota_projeto) / 3;

    return nota_final;
}

int main() {
    float notas_provas[3], notas_listas[5], nota_projeto;
    char opcao;
    do {

        printf("Digite as notas das provas, das listas e do projeto:\n");
        scanf(
          "%f%f%f%f%f%f%f%f%f%f", &notas_provas[0], &notas_provas[1], 
          &notas_provas[2], &notas_listas[0], &notas_listas[1], &notas_listas[2], 
          &notas_listas[3], &notas_listas[4], &nota_projeto
        );
  
        float nota_final = calcular_nota_final(notas_provas, notas_listas, nota_projeto);
   
        printf("Nota final: %.2f\n", nota_final);
  
        printf("Digite 's' para continuar ou 'n' para sair:\n");
        scanf(" %c", &opcao);
    } while (opcao == 's');
    return 0;
}