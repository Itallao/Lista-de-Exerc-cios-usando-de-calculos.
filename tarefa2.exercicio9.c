/*
  Tarefa 2 -  Exercicio 9-  Na Dinamarca todo cidadão tem acesso à educação e saúde de qualidade através do pagamento de um imposto 
  único sobre o salário, de 37%. Receber o salário bruto (valor do salário sem descontos) de um trabalhador dinamarquês e calcular 
  o salário líquido (valor do salário após os descontos).
  
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
    printf("Digite o Salário Bruto: ");
    scanf("%f", &SB );

    //3.calc
    SL= SB*0.63;
    
    
	//4.Output
    printf("\n SL= %.2f",SL);
    
    
    
    return 0;	
   
}
	
