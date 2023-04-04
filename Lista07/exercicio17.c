#include <stdio.h>

int fatorial_naoRecursivo(int n){
  int fatorial = 1;
  for (int i = 1; i <= n; i++)
  {
    fatorial *= i;
  }
  return fatorial;
}

int fatorial_recursivo(int n){
  if (n == 0)
  {
    return 1;
  }else{
    return n * fatorial_recursivo(n - 1) ;
  }
}

int main(){
  int num;

  printf("Digite um numero inteiro: ");
  scanf("%d", &num);

  printf("O fatorial de %d e %d\n", num, fatorial_naoRecursivo(num));
  printf("O fatorial de %d e %d", num, fatorial_recursivo(num));

}