/*
  Tarefa 2 -  Exercicio 9-  Na Dinamarca todo cidad�o tem acesso � educa��o e sa�de de qualidade atrav�s do pagamento de um imposto 
  �nico sobre o sal�rio, de 37%. Receber o sal�rio bruto (valor do sal�rio sem descontos) de um trabalhador dinamarqu�s e calcular 
  o sal�rio l�quido (valor do sal�rio ap�s os descontos).
  
    Author: Itallo Rodrigues Moreno
*/


#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    //1. Vars Declarations
   float SB, SL;
    
	//2. Input
    printf("Digite o Sal�rio Bruto: ");
    scanf("%f", &SB );

    //3.calc
    SL= SB*0.63;
    
    
	//4.Output
    printf("\n SL= %.2f",SL);
    
    
    
    return 0;	
   
}
	
