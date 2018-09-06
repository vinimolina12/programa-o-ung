#include<stdio.h>//Biblioteca de comandos de entrada e saida
#include<locale.h>
#include<stdlib.h>
int main(){
   
    setlocale(LC_ALL, "Portuguese");
    
    int a, b, c;
    
    printf("Digite o primeiro valor A \n");
    scanf("%d", &a);
    
    printf("Digite o segundo valor B \n");
    scanf("%d", &b);
    
    printf("Digite o terceiro valor C \n");
    scanf("%d", &c);
    
    if (a > b){
    	if (b > c){
    		printf("A");
		}else{
			
			if(c > a){
				printf("C");
			}else{
				printf("A");
			}
		}
		
		}else{
			
			if(b > c){
				printf("B");
			}else{
				printf("C");
			}
		}
	
    
	}

    	
    
		
	
    
    
