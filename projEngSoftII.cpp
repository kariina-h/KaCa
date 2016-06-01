#include <stdio.h>
//printf menu opções
int main(){
	int opcao=0;
	float numero=0;
	int num=0;
	int sair=0;
	while(sair!=1){
		printf("Menu opções:\n");
		printf("1- Verificar se o número é positivo ou negativo.\n");
		printf("2- Verificar se o número é ímpar ou par.\n");
		printf("3- Sair.\n");
		printf("Digite o número da opção desejada.\n");
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
				num=0;
				scanf("%d", &num);
				if((num%2)==0){
					printf("é par\n");
				}else{
					printf("é ímpar\n");
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
				printf("não existe essa opcao\n");
				break;
			}
		}
	return 0;
}
