#include <stdio.h>
#include <string.h>

typedef struct {
  char matricula[3][10];
  char nome[3][100];
  char hor_inicial[3][5];
  char hor_final[3][5];
  char especialidade[3][50];
} Medicos;

int main() {
  Medicos m1;

  strcpy(m1.matricula[0], "18.001-9");
  strcpy(m1.matricula[1], "27.653-1");
  strcpy(m1.matricula[2], "19.753-8");

  strcpy(m1.nome[0], "Rilmar Gomes");
  strcpy(m1.nome[1], "Fernando Soares");
  strcpy(m1.nome[2], "Manoel Soares");

  strcpy(m1.hor_inicial[0], "18:00");
  strcpy(m1.hor_inicial[1], "18:00");
  strcpy(m1.hor_inicial[2], "18:00");
  
  strcpy(m1.hor_final[0], "00:00");
  strcpy(m1.hor_final[1], "06:00");
  strcpy(m1.hor_final[2], "18:00");

  strcpy(m1.especialidade[0], "Clínico Geral");
  strcpy(m1.especialidade[1], "Dermatologia");
  strcpy(m1.especialidade[2], "Cardiologia");

  return 0;
}
