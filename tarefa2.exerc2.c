/*
  Tarefa 2 -  Exercicio 2- Receber base e altura de um tri�ngulo e calcular sua �rea.
  
    Author: Itallo Rodrigues Moreno
*/




#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    //1. Vars Declarations
    float B, A, mul;
    
    //2. Input
    printf("Digite a base: ");
    scanf("%f", &B);
    printf("Digite a altura: ");
    scanf("%f", &A);

    //3.calc
    mul= (B * A) / 2;
    
    //4.Output
     printf("\n Multiplica��o= %.2f ", mul);    
   	
	   return 0;	
   
}
	
   
