#include <stdio.h>

int main(){
  float matriz1[10], matriz2[10], matrizSoma[10];

  printf("Digite os valores dos vetores: ");

  for (int i = 0; i < 10; i++)
  {
    scanf("%f", &matriz1[i]);
  }

  printf("Digite os valores do segundo vetor: ");

  for (int i = 0; i < 10; i++)
  {
    scanf("%f", &matriz2[i]);
  }

  for (int i = 0; i < 10; i++)
  {
    matrizSoma[i] = matriz1[i] + matriz2[i] ;
  }

  for (int i = 0; i < 10; i++)
  {
    printf("A soma das duas matrizes é: %.2f\n", matrizSoma[i]);
  }
  
  return 0;
}