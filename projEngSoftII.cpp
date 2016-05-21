#include <stdio.h>
//apenas funcoes
int main(){
	int numero=0;
	scanf("%d", &numero);
	if(numero<0){
		printf("é negativo");
	}else{
		printf("é positivo");
	}	
	scanf("%d", &numero);
	if((numero%2)==0){
		printf("é par");
	}else{
		printf("é ímpar");
	}	
	return 0;
}
