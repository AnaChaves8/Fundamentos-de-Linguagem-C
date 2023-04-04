#include <stdio.h>

 typedef struct 
 {
  char nome[100];
  char telefone[8];
  char aniversario[10];
  char cidade[20];
  char estado[2];
 }Data;
 
int main(){
  Data d1;

  printf("Digite o nome: ");
  fgets(d1.nome,100,stdin);

  printf("Digite o telefone: ");
  fgets(d1.telefone,8, stdin);

  printf("Digite o aniversario: ");
  fgets(d1.aniversario,10,stdin);

  printf("Digite a Cidade: ");
  fgets(d1.cidade,20,stdin);

  printf("Digite o estado: ");
  fegets(d1.estado,2,stdin);

}
