#include <stdio.h>

int main(){
  int matriz[10] ;

  for (int i = 0; i < 10; i++)
  {
    matriz[i] = i * 2 ;
  }
  
  for (int i = 0; i < 10; i++)
  {
    printf("%d", matriz[i]);
  }
  printf("\n");
  

  return 0;
}