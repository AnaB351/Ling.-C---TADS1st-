/* Conversão de Real(R$) para Dólar($) */

#include <stdio.h>
#include <stdlib.h>

int main (void)

{
    float numero;
float resp_divisão;
    
    printf ("Digite um número");
    scanf("%f", &numero);
     resp_divisão = numero / 5.07;
  printf("\n $%.2f", resp_divisão);
    
    return 0;
}




