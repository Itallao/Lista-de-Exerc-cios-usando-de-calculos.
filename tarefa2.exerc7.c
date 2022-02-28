/*
  Tarefa 2 -  Exercicio 7-Uma empresa paga R$ 10.00 por hora normal trabalhada e R$ 15.00 por hora extra. Receber o total de horas normais
   e o total de horas extras trabalhadas por um empregado no mês e calcular o salário dele.
   
     Author:Itallo Rodrigues Moreno
    */

#include <stdio.h>  
#include <locale.h> 

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    
    //1. Vars Declarations
    float HN, HE, S;
   
    //2. Input
    printf("Digite as Horas Normais: ");
    scanf("%f",&HN);
    
    printf("Digite as Horas Extras:   ");
    scanf("%f",&HE);

    //3.calc
	S= HN*10.00+HE*15.00;
    
    //4.Output
    printf("\n S=R$ %.1f",S);
   
   
    return 0;
    
   
}

 


