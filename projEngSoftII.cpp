#include <stdio.h>
//printf menu op��es
int main(){
	int opcao=0;
	float numero=0;
	int num=0;
	int sair=0;
	while(sair!=1){
		printf("Menu op��es:\n");
		printf("1- Verificar se o n�mero � positivo ou negativo.\n");
		printf("2- Verificar se o n�mero � �mpar ou par.\n");
		printf("3- Sair.\n");
		printf("Digite o n�mero da op��o desejada.\n");
		scanf("%d", &opcao);
		switch(opcao){
			case 1:
				numero=0;
				scanf("%d", &numero);
				if(numero<0){
					printf("� negativo\n");
				}else{
					printf("� positivo\n");
				}
				break;
			case 2:
				num=0;
				scanf("%d", &num);
				if((num%2)==0){
					printf("� par\n");
				}else{
					printf("� �mpar\n");
				}
				break;
			case 3:
				num=0;
				scanf("%d", &num);
				if(num==0){
					sair=0;
					break;
				}else{
					sair=1;
					break;
				}
			default:
				printf("n�o existe essa opcao\n");
				break;
			}
		}
	return 0;
}
