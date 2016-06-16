#include <stdio.h>
#include <stdlib.h>

int main(){
	int opcao=0;
	float numero=0;
	float num=0;
	int aux=0;
	int sair=0;
	while(sair!=1){
		printf("Menu opcoes:\n");
		printf("1- Verificar se o numero e positivo ou negativo.\n");
		printf("2- Verificar se o numero e impar ou par.\n");
		printf("3- Sair.\n");
		printf("Digite o numero da opcao desejada.\n");
		scanf("%d", &opcao);
		switch(opcao){
			case 1:
				numero=0;
				printf("Verificar se o numero e positivo ou negativo.\n");
				printf("Digite um numero:\n");
				scanf("%f", &numero);
				if(numero==0){
						printf("%.2f e neutro\n", numero);
				}else{
					if(numero<0){
						printf("%.2f e negativo\n", numero);
					}else{
						printf("%.2f e positivo\n", numero);
					}
				}
				break;
			case 2:
				num=0;
				printf("Verificar se o numero e impar ou par.\n");
				printf("Digite um numero inteiro:\n");
				scanf("%f", &num);
				aux=num;
				if (aux==num){
					if((aux%2)==0){
						printf("%.0f e par\n", num);
					}else{
						printf("%.0f é ímpar\n", num);
					}
				}else{
					printf("Digite um numero inteiro.\n");
				}
				break;
			case 3:
				num=0;
				printf("Deseja realmente sair?\n");
				printf("Digite 1 se deseja sair, caso contrario digite 0.\n");
				scanf("%f", &num);
				if(num==0){
					sair=0;
					break;
				}else{
					sair=1;
					break;
				}
			default:
				printf("Nao existe essa opcao\n");
				break;
			}
			system("pause");
			system("cls");
		}
	return 0;
}
