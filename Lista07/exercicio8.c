#include <stdio.h>

int transformarEmSegundos(int hora, int minuto, int segundo){
  int hor = hora * 3600;
  int min = minuto * 60;
  return hor + min + segundo; 
}

void transformarEmHora(int hora, int minuto, int segundo){
 int segundos = transformarEmSegundos(hora, minuto, segundo);
 int hor = segundos / 3600;
 int min = (segundos % 3600) / 60 ;
 int seg = segundos % 60 ; 
 printf("%d : %d : %d\n", hor, min, seg ) ;
}

int main(){
  int hora, minuto, segundo;

  printf("Digite quantas horas: ");
  scanf("%d", &hora);
  printf("Digite quantos minutos: ");
  scanf("%d",&minuto);
  printf("Digite quantos segundos: \n");
  scanf("%d", &segundo);

  printf("O valor transformado em segundos e: %d\n", transformarEmSegundos(hora,minuto,segundo));
  printf("O valor transformado em horas, minutos e segundos e: ");
  transformarEmHora(hora, minuto, segundo);
 

}


