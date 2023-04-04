#include <stdio.h>

int main(){
  float notas[40], media;
  int abaixoDaMedia = 0 ;

  printf("Digite as notas dos 40 alunos: ");

  for (int i = 0; i < 40; i++)
  {
    scanf("%f", &notas[i]);
  }

  media = 0 ;

  for (int i = 0; i < 40; i++)
  {
    media += notas[i] ;
  }

  media /= 40;

  for (int i = 0; i < 40; i++)
  {
    if (notas[i] < media )
    {
      abaixoDaMedia++ ;
    }
    
  }
  
  
  printf("Media = %.2f\n", media);
  printf("Quantidade de alunos abaixo da media: %d ", abaixoDaMedia);
  
}