#include <stdio.h>

int main(){
  int valores[20], menor, posicaoMenor, aux;

  printf("Digite os valores: ");

  for (int i = 0; i < 20; i++)
  {
    scanf("%d", &valores[i]);
  }

  for (int i = 0; i < 20; i++)
  {
    menor = valores[i] ;
    posicaoMenor = i;

    for (int j = i + 1; j < 20; j++)
    {
      if (valores[j] < menor)
      {
        menor = valores[j];
        posicaoMenor = j;
      }
      
    }

    aux = valores[i];
    valores[i] = valores[posicaoMenor];
    valores[posicaoMenor] = aux ; 
    
  }

  

   printf("Vetor ordenado em ordem crescente:\n");
    for (int i = 0; i < 20; i++) {
      printf("%d ", valores[i]);
    }
    printf("\n");

  return 0;

}

 




