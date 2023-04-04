#include <stdio.h>
#include <string.h>

typedef struct Ficha
{
  char nome[100] ;
  double salario ;
  char cpf [15];
  int idade;
  char sexo; 
} Ficha;

int main()
{
  Ficha f1;

  printf("Digite o nome: ");
  fgets(f1.nome,100,stdin);

  printf("Salario: ");
  scanf("%lf", &f1.salario);

  getchar();

  printf("Cpf: ");
  fgets(f1.cpf,15,stdin);

  printf("Idade: ");
  scanf("%d", &f1.idade);

  printf("Sexo: ");
  scanf(" %c", &f1.sexo);

  puts("Registro Criado");
  
  puts("Ficha");
  printf("%s", f1.nome);
  printf("%.2lf\n", f1.salario);
  printf("%s\n", f1.cpf);
  printf("%d\n", f1.idade);
  printf("%c\n", f1.sexo);
return 0;
}