#include <stdio.h>

  typedef struct 
  {
    char nome[100];
    char turma[10];
    float notas[4];
  } Aluno;
  
int main(){
  
  Aluno a1;

  printf("Digite o nome do aluno: ");
  fgets(a1.nome,100,stdin);

  printf("Digite a turma do aluno: ");
  fgets(a1.turma, 10, stdin);

  printf("Digite as notas do aluno: ");

  for (int i = 0; i < 4; i++)
  {
    scanf("%f", &a1.notas[i]);
  }

  printf("Nome: %s\n", a1.nome);
  printf("Turma: %s\n", a1.turma);
  printf("Notas: ");
  for (int i = 0; i < 4; i++) {
    printf("%.2f ", a1.notas[i]);
  }
  printf("\n");
  

  return 0;
}

