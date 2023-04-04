#include <stdio.h>

int main(){
  int v1[5], v2[5], v3[10];

  printf("Digite os valores do vetor 1: ");

  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &v1[i]);
  }

  printf("Digite os valores do vetor 2: ");

  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &v2[i]);
  }

  for (int i = 0, j = 0; i < 5; i++, j+=2)
  {
    v3[j] = v1[i];
    v3[j + 1] = v2[i]; 
  }

  printf("Vetor concatenado: ");
  
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", v3[i]);
  }
  
}