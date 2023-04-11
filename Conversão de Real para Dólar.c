* Conversão de Real(R$) para Dólar($) */

#include <stdio.h>
#include <stdlib.h>

int main (void)

{
    float numero;
float resp_multiplicacao;
    
    printf ("Digite um número");
    scanf("%f", &numero);
     resp_multiplicacao = numero * 5.07;
  printf("\n $%.2f", resp_multiplicacao);
    
    return 0;
}



