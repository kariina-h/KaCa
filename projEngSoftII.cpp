#include <stdio.h>

int main(){
	int opcao=0;
	int numero=0;
	int sair=0;
	while(sair!=1){
		scanf("%d", &opcao);
		switch(opcao){
			case 1:
				numero=0;
				scanf("%d", &numero);
				if(numero<0){
					printf("é negativo\n");
				}else{
					printf("é positivo\n");
				}
				break;
			case 2:
				numero=0;
				scanf("%d", &numero);
				if((numero%2)==0){
					printf("é par\n");
				}else{
					printf("é ímpar\n");
				}
				break;
			case 3:
				numero=0;
				scanf("%d", &numero);
				if(numero==0){
					sair=0;
					break;
				}else{
					sair=1;
					break;
				}
			default:
				printf("não existe essa opcao\n");
				break;
			}
		}
	return 0;
}
