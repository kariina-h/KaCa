
#include <stdio.h>
#include <stdlib.h>
//printf funcionalidade numero pos ou neg
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
	//	system("pause");
	//	system("cls");
		switch(opcao){
			case 1:
				numero=0;
				printf("Verificar se o número é positivo ou negativo.\n");
				printf("Digite um número:\n");
				scanf("%f", &numero);
				if(numero<0){
					printf("é negativo\n");
				}else{
					printf("é positivo\n");
				}
				break;
			case 2:
				num=0;
				printf("Verificar se o número é ímpar ou par.\n");
				printf("Digite um número inteiro:\n");
				scanf("%d", &num);
				if((num%2)==0){
					printf("é par\n");
				}else{
					printf("é ímpar\n");
				}
				break;
			case 3:
				num=0;
				printf("Deseja realmente sair?\n");
				printf("Digite 1 se deseja sair, caso contrário digite 0.\n");
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
			system("pause");
			system("cls");
		}
	return 0;
}
