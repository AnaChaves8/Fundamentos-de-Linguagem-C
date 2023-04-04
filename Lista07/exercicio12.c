// Recursão é uma técnica de programação em que uma função chama a si mesma repetidamente até atingir uma condição de parada.

float fibonacci(n){
  if (n < 0){
    return 0;
  }else if ( n == 0 )
  {
    return 0 ;
  }else if (n == 1)
  {
    return 1;
  }else{
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
  
  
  
}