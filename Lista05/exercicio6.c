#include <stdio.h>

int main(){
  int v1[20], valor, valorVerificado = 0;

  printf("Digite os valores do vetor 1: ");

  for (int i = 0; i < 20; i++)
  {
    scanf("%d", &v1[i]);
  }

  printf("Dite o valor a ser verificado: ");
  scanf("%d", &valor);

  for (int i = 0; i < 20; i++)
  {
    if (valor == v1[i])
    {
      valorVerificado++ ; 
    }
    
  }
  
  printf("O valor solicitado aprece %d vezes", valorVerificado) ;
  
  return 0;
}  