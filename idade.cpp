/*As estruturas de decis�o verificam se uma determinada condi��o � veradedeira, se for verdadeira um bloco
de c�digo � executada, se n�o, um outro bloco ser� executado

Conceito: estrutura de decis�o if e else
Desenvolvedor: Vinicius Molina

  Desenvolva um programa que solicite a idade do usu�rio e classifique-o em maior ou menor de idade

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
	  	
	  	printf("Voc� � maior de idade");
	  	
	  }else{
	  	
	  	printf("Voc� � menor de idade");
	  	
	  }
	
	
}
