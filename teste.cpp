#include<stdio.h>
#include<locale.h>
int main (){
	
	setlocale(LC_ALL, "Portuguese");
	char nome(9);
	
	printf("teste \n");
	scanf("%s", &nome);
	printf("%s", nome);
	
	
	
	
}
