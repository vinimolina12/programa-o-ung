/* Uma agência de viagem necessita de um programa que gerencia um dos ônibus de sua frota que leva pessoas
de um destino x a um destino y. Esse ônibus, com capacidade para 56 passageiros possui suas poltronas dividas
em areas cada uma com um valor diferente: 

	 Categoria Econômica: Poltronas de 1 a 30  || Valor: R$ 52,00
	 Categoria Bussiness: Poltronas 31 a 46 || Valor: R$ 70,00
	 Categoria Master: Poltronas 47 a 56  || Valor: R$ 96,00
	 
    Ao adquirir sua passagem o cliente deverá informar a categoria desejada visualizando assim as poltronas disponíveis.
 Uma vez escolhida a poltrona seu nome deverá ser registrado juntamente com o número da poltrona garantindo assim sua reserva.
 A aplicação deverá ainda contar com uma área administrativa que permite ao usuário visualizar o status de todas as poltronas
 e ter acesso ao valor arrecadado com as vendas. 
    Desenvolva o programa que melhor solucione o problema descrito acima. */



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int opc;
int onibus[56];
char clientes[56][20];
float caixa = 0;
int ocupadas=0, disponiveis=56;


//ESVAZIAR ONIBUS
void esvaziarOnibus(){
	int i;
	for(i=0; i<56; i++) {
	onibus[i] = 0;
}
}/**/

// VISUALIZAR ONIBUS
void visualizarOnibus(){
	int i;
	system("cls");
	
	printf("## RELAÇÃO DE POLTRONAS ##\n\n");
	
	for(i=0;i<56;i++) {
		
	if(i==0)
    printf("**Classe Econômica - R$ 52,00**\n\n");
	
	else if(i==30)
	printf("**Classe Bussiness -  R$ 70,00**\n\n");
	
	else if(i==46)
	printf("** Classe Master** - R$ 96,00\n\n");	
	
	
	
	printf("%d - %d\t\t",i+1, onibus[i]);
	
	if(i%2 == 1) printf("\n");
	
     }
	printf("\n\n");
	system("pause");	
		
}/**/


//EFETUAR RESERVA
void efetuarReserva(){
	int classe, poltrona, i;
	int inicio, fim;
	float preco = 0;
	bool statusVenda = false;
	
	system("cls");
	
	printf("** VENDA DE PASSAGENS **\n\n");
	
	printf("Entre com a classe desejada: ");
	scanf("%d", &classe);
	
	if(classe == 1){
		//ECONOMICA
		inicio = 0;
		fim = 29;
		preco = 52;
		
		
	}else if(classe == 2){
		//BUSSINESS
		inicio = 30;
		fim = 45;
		preco = 70;
		
	}else if (classe == 3){
		//MASTER
		inicio = 46;
		fim = 55;
		preco = 96;
		
		
	}
	
	for(i=inicio;i<=fim;i++){
	
		printf("%d - %d\t\t",i+1, onibus[i]);
	
		if(i%2 == 1){
		
		printf("\n");
	    }

    }
    
    while(statusVenda == false){
	
	printf("\n\nEntre com o número da poltrona: ");
	scanf("%d", &poltrona);
	
	if(onibus[poltrona-1] == 0){//POLTRONA LIVRE
	
	    printf("\n\nInforme o nome do cliente: ");
		scanf("%s", &clientes[poltrona-1]);
		
		onibus[poltrona-1] = 1;//OCUPANDO POLTRONA
		caixa+=preco;
		statusVenda = true;
		ocupadas++;
		disponiveis--;
		printf("\n\n **VENDA EFETUADA! - Cliente: %s**", clientes[poltrona-1]);
				
		
	}else{
		
		printf("\n\n **POLTRONA OCUPADA!**");
		
	}
	
	printf("\n\n");
	
}
	
	printf("\n\n\n\n");
	system("pause");
	
	


}/**/



//MENU//
void montarMenu(){
	
	printf("#####AGÊNCIA DE VIAGENS MOLINA LTDA.#####\n\n\n");
	printf("Entre com a opção desejada: \n\n");
	printf("1 - Efetuar Reserva\n");
	printf("2 - Visualizar Poltronas\n");
	printf("3 - Consultar Cliente\n");
	printf("4 - Visualizar Setores\n");
	printf("5 - Relatorio de Caixa\n");
	printf("6 - Sair\n\n");
	
	printf("Opção: ");
	scanf("%d", &opc);
	
}/**/

//CONSULTAR CLIENTE//
void consultarCliente(){
	int poltrona;
	
	system("cls");
	
	printf("Entre com o número da poltrona: ");
	scanf("%d", &poltrona);
	
	if(onibus[poltrona-1] == 1){
		
		printf("Poltrona: %d\nNome do Cliente: %s\n\n\n", poltrona, clientes[poltrona-1]);
		
	}else {
		
		printf("Poltrona Disponível");
		
	}
	
	
	
	
	system("pause");
}/**/



//VER SETORES
void verSetores(){
	system("cls");
	
	
	int setor;
	int inicio, fim;
	
	printf("Selecione a classe: \n\n");
	printf("1 - Classe Econômica\n");
	printf("2 - Classe Bussiness\n");
	printf("3 - Classe Master\n");
	printf("Setor: ");
	scanf("%d", &setor);
	
	if(setor == 1){
		inicio = 0;
		fim = 29;
		
	}else if (setor == 2){
		inicio = 30;
		fim = 45;
		
	}else if (setor == 3){
		inicio = 46;
		fim = 55;
		
	}
	
	int i;
	
	for(i=inicio;i<=fim;i++){
		if(onibus[i] == 1){
			printf("\nPOLTRONA: %d - Cliente: %s\n",i+1, clientes[i]);
		}
	}
	
	system("pause");
}
    
//VERCAIXA
void verCaixa(){
	int i;
	system("cls");
	
	printf("****RELATORIO ATUAL****\n\n");
	printf("Lugares Reservados: %d.\n", ocupadas);
	printf("Lugares Disponíveis: %d.\n\n", disponiveis);
	
	for(i=0;i<56;i++){
		if(onibus[i] == 0){
			printf("%d\t ",i+1);
		}else {
			
			printf("*%d*\t ", i+1);
		}
		
		if((i+1)%10 == 0)printf("\n\n");
			
	
		
		
	}
	
	
	printf("\n\nSaldo em Caixa: R$%.2f\n\n\n", caixa);
	
	system("pause");
	
	
}/**/
	    
    
//MAIN//    
int main (){
	
	
	setlocale(LC_ALL, "");
	
	esvaziarOnibus();

	
	do{
		
	
	montarMenu();
	
	if (opc == 1){
		//RESERVA
		efetuarReserva();
		
	}else if (opc == 2){
		//POLTRONAS
		visualizarOnibus();
		
	}else if (opc == 3){
		//CLIENTES
		consultarCliente();
		
	}else if (opc == 4){
		//SETORES
		verSetores();
		
	}else if (opc ==5) {
		//CAIXA
		verCaixa();
		
		
		
		
		
	}else if(opc<1 || opc>6){
		
		printf("Opção Inválida");
		_sleep(5000);
	}
	
	
	
	
	
	
	
	
	
	
	system("cls");
	}while(opc != 6);
	
	
}
