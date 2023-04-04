#include<stdio.h>

int main(){
  float n1, n2, media=0;

  printf("Digite dois numeros ");
  scanf("%f%f", &n1, &n2);

  media = (n1 + n2) / 2 ;

  printf("A media aritimetica desses dois valores e: %.2f", media);

  return 0;

}

