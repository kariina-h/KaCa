#include <stdio.h>
#include <stdlib.h>

int main(){
	int opcao=0;
	float numero=0;
	float num=0;
	int aux=0;
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
				printf("Verificar se o n�mero � positivo ou negativo.\n");
				printf("Digite um n�mero:\n");
				scanf("%f", &numero);
				if(numero==0){
						printf("� neutro\n");
				}else{
					if(numero<0){
						printf("� negativo\n");
					}else{
						printf("� positivo\n");
					}
				}
				break;
			case 2:
				num=0;
				printf("Verificar se o n�mero � �mpar ou par.\n");
				printf("Digite um n�mero inteiro:\n");
				scanf("%f", &num);
				aux=num;
				if (aux==num){
					if((aux%2)==0){
						printf("� par\n");
					}else{
						printf("� �mpar\n");
					}
				}else{
					printf("Digite um n�mero inteiro.\n");
				}
				break;
			case 3:
				num=0;
				printf("Deseja realmente sair?\n");
				printf("Digite 1 se deseja sair, caso contr�rio digite 0.\n");
				scanf("%f", &num);
				if(num==0){
					sair=0;
					break;
				}else{
					sair=1;
					break;
				}
			default:
				printf("N�o existe essa opcao\n");
				break;
			}
			system("pause");
			system("cls");
		}
	return 0;
}
