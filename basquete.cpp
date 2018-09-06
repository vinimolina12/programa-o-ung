#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	/*
	Um ginásio de esportes necessita de um programa para gerenciar os jogos de basquete entre as equipes. Ao 
	término das partidas o operador deverá informar para cada equipe a quantidade de acertos referentes à 
	lances livres (1 ponto), lances regulares(2 pontos), longa distância(3 pontos). Após dadas as informações
	deverá ser exibido o placar final da partida com destaque para a equipe vencedora. Em caso de empate o time
	vencedor será aquele que tiver o menor número de faltas no jogo.
	
	*/
	setlocale(LC_ALL, "");
	
	//DECLARAÇÃO DAS VARIÁVEIS
    int lvA, lrA, ldA, lvB, lrB, ldB;
	int faltasA, faltasB, pontoA, pontoB;
	
	//INSERINDO OS LANCES DO TIME A
	printf("Lances livres time A \n");
	scanf("%d", &lvA);
	
	
	printf("Lance regulares time A \n");
	scanf("%d", &lrA);
	
	printf("Lance distância time A \n");
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
	
	printf("Lance distância time B \n");
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
		  	
		  	printf("Resultado: Time A: %d x Time B: %d \n O time vencedor é A", pontoA, pontoB);
		  	
		  }else{
		  	
		  	printf("Resultado: Time A: %d x Time B: %d \n O time vencedor é B", pontoA, pontoB);
		  }
             		
	}else{ 
	     
	      if(faltasA > faltasB){
	      	
	      	printf("Resultado: Time A: %d x Time B: %d \n O time vencedor é B", pontoA, pontoB);
	      	
		  }else{
		  	
		  	printf("Resultado: Time A: %d x Time B: %d \n O time vencedor é A", pontoA, pontoB);
		  	
		  }
		
		
	}
	
	
}

