/*As estruturas de decisão verificam se uma determinada condição é veradedeira, se for verdadeira um bloco
de código é executada, se não, um outro bloco será executado

Conceito: estrutura de decisão if e else
Desenvolvedor: Vinicius Molina

  Desenvolva um programa que solicite a idade do usuário e classifique-o em maior ou menor de idade

*/

#include<stdio.h>//Biblioteca de comandos de entrada e saida
#include<locale.h>
#include<stdlib.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Informe sua idade \n");
	scanf("%d", &idade);
	
	  if(idade>=18){
	  	
	  	printf("Você é maior de idade");
	  	
	  }else{
	  	
	  	printf("Você é menor de idade");
	  	
	  }
	
	
}
