#include<stdio.h>
#include<math.h>

float quadrado (float num){
  return pow(num, 2);
}

float cubo (float num){
  float quad = quadrado(num) ;
  return quad * num;
}

int main(){
  float n;
  printf("Digite um valor: ");
  scanf("%f", &n);

  printf("O quedrado do numero e: %.2f\n", quadrado(n));
  printf("O cubo do numero e: %.2f\n", cubo(n));
}