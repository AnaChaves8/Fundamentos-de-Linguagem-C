#include <stdio.h>
#include <string.h>

typedef struct 
{
  double nota1[40];
  double nota2[40];
  double nota3[40];
  double nota4[40];
  double nota_final[40];
}Notas;

typedef struct 
{
  char matricula[40][6];
  Notas notas;
  char situacao[40][10];
}Alunos;

typedef struct 
{
  char nome[100];
  Alunos alunos;
}Turma;

int main(){
  Turma t;
  float media;
  int aprovados = 0, reprovados = 0;

  printf("Digite o nome da turma: ");
  fgets(t.nome, 100, stdin);

  printf("Digite a matricula dos alunos: ");

  for (int i = 0; i < 40; i++)
  {
    fgets(t.alunos.matricula[i], 6, stdin);
  }
  

  printf("Digite as notas da prova 1: ");

  for (int i = 0; i < 40; i++)
  {
    scanf("%lf", &t.alunos.notas.nota1[i]);
  }

  printf("Digite as notas da prova 2: ");

  for (int i = 0; i < 40; i++)
  {
    scanf("%lf", &t.alunos.notas.nota2[i]);
  }

  printf("Digite as notas da prova 3: ");
  for (int i = 0; i < 40; i++)
  {
    scanf("%lf", &t.alunos.notas.nota3[i]);
  }

  printf("Digite as notas da prova 4: ");

  for (int i = 0; i < 40; i++)
  {
    scanf("%lf", &t.alunos.notas.nota4[i]);
  }

  // Calcula a média e a situação dos alunos
  for (int i = 0; i < 40; i++)
  {
    media = 0;

    for(int j = 0; j < 4; j++)
    {
      media += t.alunos.notas.nota1[i];
    }
    
    media /= 4;

    t.alunos.notas.nota_final[i] = media;

    if (media >= 6)
    {
      strcpy(t.alunos.situacao[i], "Aprovado");
      aprovados++;
    }
    else
    {
      strcpy(t.alunos.situacao[i], "Reprovado");
      reprovados++;
    }
  }

  // Imprime a listagem dos alunos com a matrícula e a situação
  printf("Listagem dos alunos:\n");
  for (int i = 0; i < 40; i++)
  {
    printf("Matrícula: %s | Situação: %s\n", t.alunos.matricula[i], t.alunos.situacao[i]);
  }

  // Imprime o número de alunos aprovados e reprovados
  printf("Número de alunos aprovados: %d\n", aprovados);
  printf("Número de alunos reprovados: %d\n", reprovados);
  
  return 0 ;
}