# include<stdio.h>

int somatorio_naoRecursivo(int n){

  int somatorio = 0;
  for (int i = 1; i <= n; i++)
  {
    somatorio += i ; 
  }
  return somatorio;
}

int somatorio_recursivo(int n){

  if (n == 1){
    return 1 ;
  }else{
    return n + somatorio_recursivo(n - 1) ;
  }
}

int main(){
  int num ;
  printf("Digite um numero inteiro: ");
  scanf("%d", &num);

  printf("O somatorio de 1 ate o numero %d e : %d\n", num, somatorio_naoRecursivo(num) );
  printf("O somatorio de 1 ate o numero %d e : %d", num, somatorio_recursivo(num) );
}

