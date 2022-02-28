/*
Tarefa 2 -  Exercicio 4 -  Receber uma temperatura em Fahrenheits e convertê-la para Celsius.

  Author: Itallo Rodrigues Moreno
  */


#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    //1. Vars Declarations
     float f, c;
   
    //2. Input
    printf("DIGITE F: ");
    scanf("%f", &f);

    //3.calc
    c= (f-32) / 1.8;
    
    //4.Output
    printf("\n Celsius= %.2f", c);
	   
	return 0;	
   
}

	
