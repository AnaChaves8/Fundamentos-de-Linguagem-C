#include <stdio.h>

#define tamanho 20

float mediaTurma(float nota[tamanho]){
  float media = 0 ;
  for (int i = 0; i < tamanho; i++)
  {
    media += nota[i] ;
  }
  
  return media / tamanho;
}



int main(){
  float notas[tamanho];
  char nome[100];

  for (int i = 0; i < tamanho; i++){
    printf("Digite o nome do aluno: ");
    scanf("%s", nome );
    printf("Digite a nota do aluno: ");
    scanf("%f", &notas[i]);
  }

  printf("%.2f", mediaTurma(notas) );
  
}