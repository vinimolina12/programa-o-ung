#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	/*
	Um gin�sio de esportes necessita de um programa para gerenciar os jogos de basquete entre as equipes. Ao 
	t�rmino das partidas o operador dever� informar para cada equipe a quantidade de acertos referentes � 
	lances livres (1 ponto), lances regulares(2 pontos), longa dist�ncia(3 pontos). Ap�s dadas as informa��es
	dever� ser exibido o placar final da partida com destaque para a equipe vencedora. Em caso de empate o time
	vencedor ser� aquele que tiver o menor n�mero de faltas no jogo.
	
	*/
	setlocale(LC_ALL, "");
	
	//DECLARA��O DAS VARI�VEIS
    int lvA, lrA, ldA, lvB, lrB, ldB;
	int faltasA, faltasB, pontoA, pontoB;
	
	//INSERINDO OS LANCES DO TIME A
	printf("Lances livres time A \n");
	scanf("%d", &lvA);
	
	
	printf("Lance regulares time A \n");
	scanf("%d", &lrA);
	
	printf("Lance dist�ncia time A \n");
	scanf ("%d", &ldA);
	
	printf("Falta cometidas time A \n");
	scanf("%d", &faltasA);
	system("cls");
	//
	
	//CALCULANDO OS PONTOS DO TIME A
	pontoA = lvA + (lrA * 2) + (ldA * 3);
	//
	
	
	
	//INSERINDO OS LANCES DO TIME B
	printf("Lances livres time B \n");
	scanf("%d", &lvB);
	
	printf("Lance regulares time B \n");
	scanf("%d", &lrB);
	
	printf("Lance dist�ncia time B \n");
	scanf ("%d", &ldB);
	
	printf("Falta cometidas time B \n");
	scanf("%d", &faltasB);
	system("cls");
	//
	
	//CALCULANDO OS PONTOS DO TIME B
	pontoB = lvB + (lrB * 2) + (ldB * 3);
	//
	
	
	
	if (pontoA != pontoB){
		
		  if(pontoA > pontoB){
		  	
		  	printf("Resultado: Time A: %d x Time B: %d \n O time vencedor � A", pontoA, pontoB);
		  	
		  }else{
		  	
		  	printf("Resultado: Time A: %d x Time B: %d \n O time vencedor � B", pontoA, pontoB);
		  }
             		
	}else{ 
	     
	      if(faltasA > faltasB){
	      	
	      	printf("Resultado: Time A: %d x Time B: %d \n O time vencedor � B", pontoA, pontoB);
	      	
		  }else{
		  	
		  	printf("Resultado: Time A: %d x Time B: %d \n O time vencedor � A", pontoA, pontoB);
		  	
		  }
		
		
	}
	
	
}

