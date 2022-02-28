/*
  Tarefa 2 -  Exercicio 6 Calcular o perímetro de uma circunferência recebendo seu raio. C = 2 *  * r (utilizar  = 3.14
  
    Author: Itallo Rodrigues Moreno
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    //1. Vars Declarations
    float r, c, mul;
    
	//2. Input
    printf(" Digite o Raio: ");
    scanf("%f", &r);
    
	//3.calc
    mul= (3.14*r)*2;
    
    //4.Output
    printf("\n c= %.2f", mul);
	   
	
	return 0;	
	    
}
	
