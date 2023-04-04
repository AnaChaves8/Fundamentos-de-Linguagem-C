#include <stdio.h>

float area_circulo(float raio){
  float area = 3.14 * ( raio * raio);
  return area ;
}


int main(){
  float raio;

  printf("Digite o raio do circulo: ");
  scanf("%f", &raio);

  printf("A area do circulo e: %.2f", area_circulo(raio));
}