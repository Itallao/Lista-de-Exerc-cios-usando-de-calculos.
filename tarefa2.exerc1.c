/*
  Tarefa 2 -  Exercicio 1- Receber dois valores e calcular sua média aritmética.
  
    Author: Itallo Rodrigues Moreno
*/

#include <stdio.h>  
#include <locale.h> 

   int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    //1. Vars Declarations
    float numero1, numero2, average;
    
    //2. Input
    printf("Digite um numero real: ");
    scanf("%f", &numero1);
    printf("Digite um numero real: ");
    scanf("%f", &numero2);
    //3.calc
    average= (numero1 + numero2) / 2;
    
    //4.Output
    printf("\n Media= %.2f", average);
   	
	   return 0;	
   	
}


