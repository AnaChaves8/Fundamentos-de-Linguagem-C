#include <stdio.h>
#include <math.h>

float distanciaDoisPontos(float x1,float x2, float y1, float y2){
  float distancia = sqrt(pow(x1 - y1, 2) + pow(x2 - y2, 2)) ;
  return distancia;
}

int main(){
  float x1, y1, x2, y2 ;
  x1 = 3 ;
  x2 = 5 ;
  y1 = 6 ;
  y2 = 1 ;

  printf("%.2f", distanciaDoisPontos(x1, x2, y1, y2)) ;
}

