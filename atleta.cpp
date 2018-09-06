#include<stdio.h>//Biblioteca de comandos de entrada e saida
#include<locale.h>
#include<stdlib.h>

/* Um treinador deseja classificar um atleta em uma determinada categoria baseada em sua idade. As categorias
vão de acordo com a tabela abaixo:
 
   Categoria Junior: 10 a 12 anos
   Categoria Juvenil: 13 a 16 anos
   Categoria Amador: 17 a 20 anos
   Categoria Profissional: àcima de 20 anos
   
   Não são aceitos atletas abaixo dos 10 anos e acima dos 35.
  
 
 */
int main(){
   
    setlocale(LC_ALL, "Portuguese");
    
    int idade;
    
    printf("Entre com a idade do atleta \n");
    scanf("%d", &idade);
    
    
    if(idade>=10 && idade <= 12){
    	
    	printf("Categoria Junior");
    	
	}else if (idade>=13 && idade <= 16){
		
		printf("Categoria Juvenil");
		
	}else if (idade>=17 && idade <= 20){
		
		printf("Categoria Amador");
		
	}else if (idade>20 && idade<=35){
		
		printf("Categoria Profissional");
		
	}
		
	else{

		printf("Não são aceitos atletas com menos de 10 anos e mais de 35 anos \n");
		
	}
	
	system("pause");
		
	
	
	
	
	
}
