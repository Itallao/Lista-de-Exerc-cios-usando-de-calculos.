/*
    Tarefa 2 -  Exercicio 8 - A disciplina Algoritmos e Programação é dividida em duas partes: teoria e prática. Na teoria, são aplicadas duas provas 
(com nota de 0 a 10 cada).Na prática também vale a mesma fórmula. As notas das duas partes se juntam no final do semestre para compor a nota do aluno 
na disciplina, mas a teoria tem peso de 60%, enquanto a prática tem peso de 40%. Receba as notas de um aluno em cada prova teórica e prática e mostre 
a nota final do semestre dele na disciplina.
	 
	 Author: Itallo Rodrigues Moreno

 */





#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    //1. Vars Declarations
    float PTN1, PTN2, PPN1, PPN2, NotaFinal;
    
    //2. Input
    printf("Digite a Nota da Prova Teorica 1: ");
    scanf("%f", &PTN1);
    
	printf("Digite a Nota da Prova Teorica 2: ");
    scanf("%f", &PTN2);
   
    printf("Digita a Nota da Prova Prática 1: ");
    scanf("%f", &PPN1);
    
	printf("Digita a Nota da Prova Prática 2: ");
    scanf("%f", &PPN2);
    
    //3.calc
    
    NotaFinal=(PTN1*60+PTN2*60+PPN1*40+PPN2*40)/200;
	
	//4.Output
    printf("\n Notas= %.2f", NotaFinal );
	   
	
	return 0;	
   
}
