#include<stdio.h>//Biblioteca de comandos de entrada e saida
#include<locale.h>
#include<stdlib.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/* Um pedreiro necessita de um programa para calcular a quantidade de blocos necessários para levantar 
	uma parede. Faça o programa!
	
	*/
	//Variáveis
	float blocos(9), altParede(9), larParede(9), altBloco(9), larBloco(9);
	
	//VALOR DA ALTURA DA PAREDE
	printf("Insira o valor da altura da parede \n");
	scanf("%f", &altParede);
	
	//VALOR DA LARGURA DA PAREDE
	printf ("Insira o valor da largura da parede \n");
	scanf("%f", &larParede);
	
	
	//VALOR DA ALTURA DO BLOCO
	printf("Insira o valor da altura do bloco \n");
	scanf("%f", &altBloco);
	
	//VALOR DA LARGURA DO BLOCO
	printf("Insira o valor da largura do bloco \n");
	scanf("%f", &larBloco);
	
	
	//Operação
	blocos = (altParede / altBloco) * (larParede / larBloco);
	
	
	printf("A quantidade de blocos será: %f", blocos);
	
	
	
	
	
	 
	 
	
}
