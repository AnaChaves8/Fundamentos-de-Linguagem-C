#include <stdio.h>

int main(){
  int v1[20], vetorImpar[20], vetorPar[20];
  int impar = 0, par = 0;

  printf("Digite os valores do vetor 1: ");

  for (int i = 0; i < 20; i++)
  {
    scanf("%d", &v1[i]);
  }

  for (int i = 0; i < 20; i++)
  {
    if (v1[i] % 2 == 0)
    {
      vetorPar[par] = v1[i];
      par++;
    }
    else
    {
      vetorImpar[impar] = v1[i];
      impar++;
    }
  }

  printf("Vetor par: ");
  for (int i = 0; i < par; i++)
  {
    printf("%d ", vetorPar[i]);
  }
  printf("(%d elementos)\n", par);

  printf("Vetor impar: ");
  for (int i = 0; i < impar; i++)
  {
    printf("%d ", vetorImpar[i]);
  }
  printf("(%d elementos)\n", par);
  
  

  return 0;
}  