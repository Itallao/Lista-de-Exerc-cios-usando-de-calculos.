 /*
  Tarefa 2 -  Exercicio 3- Receber um comprimento em metros e convertê-lo para centímetros.
  
    Author: Itallo Rodrigues Moreno
 */

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    //1. Vars Declarations
    
     float metros, centimetros;
   
    //2. Input
     printf(" Digite os Metros:  ");
      scanf("%f", &metros);
 
    //3.calc
    centimetros = metros * 100;
   
     //4.Output
     printf("Centimetros = %.1f cm", centimetros);
     
    
	   return 0;	
   
}
	
	
	
	
	
	
