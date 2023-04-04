#include<stdio.h>

int soma(int n1, int n2){
   return n1 + n2;
}
int subtracao(int n1, int n2){
   return n1 - n2;
}
int produto(int n1, int n2){
   return n1 * n2;
}
int quociente(int n1, int n2){
   return n1 / n2;
}
int resto(int n1, int n2){
   return n1 % n2;
}

int main(){
  int n1, n2 ;
  printf("Digite dois numeros inteiros: ");
  scanf("%d%d", &n1, &n2);

  printf("A soma dos valores e: %d\n", soma(n1, n2));
  printf("A subtracao dos valores e: %d\n", subtracao(n1,n2));
  printf("O produto dos valores e: %d\n", produto(n1,n2));
  printf("O quociente dos valores e: %d\n", quociente(n1,n2));
  printf("O resto dos valores e: %d\n", resto(n1,n2));
 
}