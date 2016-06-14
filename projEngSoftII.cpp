#include <stdio.h>
#include <stdlib.h>

int main(){
	int opcao=0;
	float numero=0;
	float num=0;
	int aux=0;
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
				printf("Verificar se o número é positivo ou negativo.\n");
				printf("Digite um número:\n");
				scanf("%f", &numero);
				if(numero==0){
						printf("é neutro\n");
				}else{
					if(numero<0){
						printf("é negativo\n");
					}else{
						printf("é positivo\n");
					}
				}
				break;
			case 2:
				num=0;
				printf("Verificar se o número é ímpar ou par.\n");
				printf("Digite um número inteiro:\n");
				scanf("%f", &num);
				aux=num;
				if (aux==num){
					if((aux%2)==0){
						printf("é par\n");
					}else{
						printf("é ímpar\n");
					}
				}else{
					printf("Digite um número inteiro.\n");
				}
				break;
			case 3:
				num=0;
				printf("Deseja realmente sair?\n");
				printf("Digite 1 se deseja sair, caso contrário digite 0.\n");
				scanf("%f", &num);
				if(num==0){
					sair=0;
					break;
				}else{
					sair=1;
					break;
				}
			default:
				printf("Não existe essa opcao\n");
				break;
			}
			system("pause");
			system("cls");
		}
	return 0;
}
