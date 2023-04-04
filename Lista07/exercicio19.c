#include <stdio.h>


float *somaVetores(float v1[], int m, float v2[], int n) {
  float v3[m + n];

 
  int j = 0;
  for (int i = 0; i < m; i++) {
    v3[i] = v1[i];
    j++;
  }
  for (int i = 0; i < n; i++) {
    v3[j] = v2[i];
    j++;
  }
  
  return v3;
}

int main() {
  int m = 5, n = 5;
  float v1[m], v2[n];

  printf("Digite os valores do vetor 1: ");
  for (int i = 0; i < m; i++) {
    scanf("%f", &v1[i]);
  }

  printf("Digite os valores do vetor 2: ");
  for (int i = 0; i < n; i++) {
    scanf("%f", &v2[i]);
  }

  float *v3 = somaVetores(v1, m, v2, n);

  printf("Vetor concatenado: ");
  for (int i = 0; i < m + n; i++) {
    printf("%.2f ", *(v3+i));
  }
  printf("\n");

  return 0;
}