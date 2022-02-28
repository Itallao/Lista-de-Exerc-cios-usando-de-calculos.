/*
  Tarefa 2 -  Exercicio 10-  Receber o ano de nascimento do usuário e dizer aproximadamente quantos dias de vida ele tem.
  
    Author: Itallo Rodrigues Moreno
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    //1. Vars Declarations
    int Ano, Dias;
   
    //2. Input
    printf("Digite o Ano de Nascimento: ");
    scanf("%i", &Ano);
    
	//3.calc
	Dias=(2021-Ano)*365;
   
    
    //4.Output
    printf("\n Dias= %.i", Dias);
	   
	
	return 0;	
   
}
	
