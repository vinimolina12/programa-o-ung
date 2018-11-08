#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	
	int vetor[]={5,8,7,2,4,6,13,9,10,15,7,1};
	int busca, i, local;
	bool achou = false;
	
	printf("Entre com a váriavel que deseja encontrar");
	scanf("%d", &busca);
	
	for(i=0;i<12;i++){
		
		if(busca == vetor[i]){
			achou = true;
			local = i;
			break;
		}
			
	}
	
	if(achou == false){
	 printf("Não encontrado");
	}else{
		printf("Encontrado em %d", local);
	}
}
