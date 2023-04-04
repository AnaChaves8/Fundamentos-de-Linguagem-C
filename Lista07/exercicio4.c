#include <stdio.h>

float area_circulo(float raio){
  float area = 3.14 * ( raio * raio);
  return area ;
}
float diametro_circulo(float raio){
  float diametro = 2 * raio ;
  return diametro ;
}
float perimetro_circulo(float raio){
  float perimetro = 2 * 3.14 * ( raio * raio);
  return perimetro ;
}

int main(){
  
  float raio;

  printf("Digite o raio do circulo: ");
  scanf("%f", &raio);

  printf("A area do circulo e: %.2f\n", area_circulo(raio));
  printf("O diametro do circulo e: %.2f\n", diametro_circulo(raio));
  printf("O perimetro do circulo e: %.2f\n", perimetro_circulo(raio));

  return 0;
}