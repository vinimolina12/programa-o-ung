#include<stdio.h>//Biblioteca de comandos de entrada e saida
#include<locale.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int main (){
	

     
	 
	 /*
	 Programa L
	 Data 22/08/2018
	 Conceitos: entrada e saida, vari�veis, opera��es
	 Desenvolvedor: Vinicius Molina
	 
	 
	 Uma imobili�ria atua em quatro bairros nas regi�es de Guarulhos, onde em cada bairro possui
	 um valor espec�fico para o metro quadrado de um im�vel. Segue abaixo o valor do metro quadrado
	 dos im�veis para cada bairro: 
	  
	     Bom Clima: R$3500m�
	     
	     Pimentas: R$4000m�
	     
 	     �gua Azul: R$6200m�
	     
	     Cecap: R$4500m�
	 
	 A im�biliaria conta com emprendimentos(condom�nios) com o mesmo padr�o distribu�dos entre os 
	 quatro locais, onde o cliente ao informar a metragem do im�vel desejado deve visualizar o
	 valor total para as quatro regi�es.   
	 */	
	 
	 
	setlocale(LC_ALL, "Portuguese");
	
	//Vari�veis
	
	int bomClima(9), pimentas(9), aguaAzul(9), cecap(9), valorEntrada(9), valorSaida(9);
	char regiao[64];
//	char regiaoA[] = {'Bom Clima', 'Pimentas', 'Agua Azul', 'Cecap'};
	bomClima = 3500;
	pimentas = 4000;
	aguaAzul = 6200;
	cecap = 4500;
	
	printf("Insira a metragem \n");
	 
	scanf("%d", &valorEntrada);
  
	printf("Escolha a regi�o: \n Bom Clima: %d  \n Pimentas: %d \n Agua Azul: %d \n Cecap: %d \n", bomClima, pimentas, aguaAzul, cecap);
	
	scanf("%s", &regiao);
	

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   /* switch(regiao){
    	case "Bom Clima":
    	 	valorSaida = bomClima * valorEntrada;
		     printf("O valor total �: %d", valorSaida);
		     break;
	}
	//printf("regiao � %s", regiao);
	/*
	if (gets(regiao)== "Bom Clima"){
		
		valorSaida = bomClima * valorEntrada;
		printf("O valor total �: %d", valorSaida);
		
	} else if(regiao == "Pimentas"){
		
		valorSaida = pimentas * valorEntrada;
		printf("O valor total �: %d", valorSaida);
		
	}else if(regiao == "Agua Azul"){
		
		valorSaida = aguaAzul * valorEntrada;
		printf("O valor total �: %d", valorSaida);
	}
	
	 else if(regiao == "Cecap"){
	 	valorSaida = cecap * valorEntrada;
	 	printf("O valor total �: %d", valorSaida);
	 	
	 }else{
	 	printf("Por favor insira o nome correto");
	 }
	 
	
	
	
	
	
	
	
	
	
	
	
	
	/*
	char nome(9);
	
	printf("teste \n");
	scanf("%s", &nome);
	printf("%s", nome);
	*/
	
	
	
	
	
}
