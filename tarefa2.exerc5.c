/*
  Tarefa 2 -  Exercicio 5-   A velocidade m�dia de um ve�culo em um percurso � dada atrav�s da dist�ncia percorrida pelo tempo, ou seja, Vm = DS / Dt. 
  Calcular a velocidade m�dia do ve�culo em uma estrada recebendo esses dois dados do percurso
    
	Author: Itallo Rodrigues Moreno
  */

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    //1. Vars Declarations
    float dt, ds, vm;
    
	//2. Input
    printf("Digite a distancia em horas: ");
    scanf("%f", &dt);
    
	printf("Digite a distancia em km:     ");
    scanf("%f", &ds);
    
    //3.calc
    vm= ds/dt;
    
    //4.Output
    printf("\n Velocidade M�dia Km/H= %.2f", vm);
	
	
	return 0;	
   
}
	
