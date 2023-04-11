/* Conversão de Real(R$) para Dólar($) */ 

#include <stdio.h>
#include <stdlib.h>

int main (void)

{
    int numero;
    int multiplicacao;

    printf ("Digite um número");
    scanf("%i", &numero);
    
     multiplicacao = numero * 5.07;
  printf("\nAproximadamente = $%i ", multiplicacao);
    
    return 0;
}

