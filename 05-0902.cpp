#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	//DECLARA��O DE VARI�VEIS
	int nivel;	
	float venda, comissao, salario, salarioFinal, meta;
	char nome[10], resp;
	
	
	//RECEBENDO O NIVEL DO FUNCIONARIO
	do {
	system("cls");	
	printf("Informe o n�vel do funcion�rio \n");
	scanf("%d", &nivel);
	if(nivel <= 4 && nivel > 0){
	
	//
	
	//RECEBENDO O VALOR DAS VENDAS
	printf("Informe o valor das vendas \n");
	scanf("%f", &venda);
	//
	
	
     	//TRATAMENTO DOS FUNCION�RIOS
		if(nivel == 1){
			strcpy(nome, "Pedro");
			salario = (float)1000.00;
			comissao = (float)0.1;
			
		}else if(nivel == 2){
			strcpy(nome, "Zeca");
			salario = (float)1500.00;
			comissao = (float)0.12;
			
		}else if(nivel == 3){
			strcpy(nome, "Biba");
			salario = (float)2500.00;
			comissao = (float)0.15;
			
		}else if (nivel == 4){
			strcpy(nome, "Nino");
			salario = (float)3000.00;
			comissao = (float)0.18;
		}
	
   meta = salario * 5;
   
       if(venda >= meta){
       	
       	  salarioFinal = salario + (venda * comissao);
       	  
	   }else{
	   	
	   	  salarioFinal = salario;
	   }
   
    system("cls");
    
    //SAIDA DOS RESULTADOS
    printf("C�digo: %d \n Nome: %s \n Salario: R$%.2f \n Total de Vendas: R$%.2f \n Meta: R$%.2f\n -------------------\n Total: R$%.2f \n",
	nivel, nome, salario, venda, meta, salarioFinal);
   

    }else {
    	printf("Nivel do funcion�rio inv�lido \n");
	}
	
	
	printf("Deseja Continuar?(s/n) \n");
	scanf("%s", &resp);
	
 }while(resp == 's');
     
	
	
	
	system("pause");
	
	
}
