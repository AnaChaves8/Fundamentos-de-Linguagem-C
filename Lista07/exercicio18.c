#include <stdio.h>

int verificarSeEPrimo(int n){
  if (n <= 1)
  {
    return 0 ;
  }

  for (int i = 2; i < n; i++)
  {
    if (n % i == 0){
      return 0 ;
    } 
  }
  return 1 ;
}

int fatorial(int n){
  if(n == 0){
    return 1;
  }else
  return n * fatorial(n-1);
}

void encontrarDivisores(int n, int divisores[]) {
  int j = 0;
  for (int i = 1; i <= n/2; i++) {
    if (n % i == 0) {
      divisores[j] = i;
      j++;
    }
  }
  divisores[j] = n; 
}

int quadradoPerfeito(int n) {
    int raiz = sqrt(n);
    return raiz * raiz == n;
}


void fibonacci(int n) {
    int i, primeiro = 0, segundo = 1, proximo = 0;

    printf("%d %d ", primeiro, segundo);

    for(i = 2; proximo < n; i++) {
        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;

        if(proximo < n) {
            printf("%d ", proximo);
        }
    }
}
