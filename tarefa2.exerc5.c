/*
  Tarefa 2 -  Exercicio 5-   A velocidade média de um veículo em um percurso é dada através da distância percorrida pelo tempo, ou seja, Vm = DS / Dt. 
  Calcular a velocidade média do veículo em uma estrada recebendo esses dois dados do percurso
    
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
    printf("\n Velocidade Média Km/H= %.2f", vm);
	
	
	return 0;	
   
}
	
