#include <stdio.h>
//apenas funcoes
int main(){
	int numero=0;
	scanf("%d", &numero);
	if(numero<0){
		printf("� negativo");
	}else{
		printf("� positivo");
	}	
	scanf("%d", &numero);
	if((numero%2)==0){
		printf("� par");
	}else{
		printf("� �mpar");
	}	
	return 0;
}
