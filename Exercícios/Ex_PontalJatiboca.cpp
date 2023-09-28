#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
	
	int comando, empresa;
	float estoqueJ = -1, estoqueP = -1, valor;	
	
	printf("Seja bem vindo ao sistema de controle de estoque da empresa Jatiboca e sua filial, Pontal!\n");
	
	while (estoqueJ < 0){
		printf("Entre com o estoque em kg de a�ucar da empresa Jatiboca:\n");
		scanf("%f", &estoqueJ);
		if (estoqueJ < 0){
			printf("O valor � inv�lido! Digite um valor positivo\n");
		}
	}
	while (estoqueP < 0){
		printf("Entre com o estoque em kg de a�ucar da filial Pontal:\n");
		scanf("%f", &estoqueP);
		if (estoqueP < 0){
			printf("O valor � inv�lido! Digite um valor positivo\n");
		}
	}
	do {
		printf("Qual opera��o deseja realizar?:\n");
		printf("1 � Entrada de Estoque\n2 � Sa�da de Estoque\n3 � Transfer�ncia de Estoque\n4 � Consulta Estoque\n5 � Finalizar\nDigite o comando num�rico:\n");
		scanf("%i", &comando);
		
		switch (comando){
			
			case 1:
				printf("Para qual empresa?:\n1 - Jatiboca\n2 - Pontal\n");
				scanf("%i", &empresa);
				if (empresa == 1){
					printf("Qual a quantidade de entrada de a��car em Jatiboca?:\n");
					scanf("%f", &valor);
					if (valor >= 0){
					estoqueJ = estoqueJ + valor;
					} else {
						printf("Valor negativo � inv�lido!\n");
					}
					printf("Estoque atualizado em Jatiboca: %.2f kg\n\n", estoqueJ);
				} else if (empresa == 2){
					printf("Qual a quantidade de entrada de a��car em Pontal?:\n");
					scanf("%f", &valor);
					if (valor >= 0){
					estoqueP = estoqueP + valor;
					} else {
						printf("Valor negativo � inv�lido!\n");
					}
					printf("Estoque atualizado em Pontal: %.2f kg\n\n", estoqueP);
				} else {
					printf("Comando inv�lido!\n\n");
				}
				break;
				
			case 2:
				printf("Para qual empresa?:\n1 - Jatiboca\n2 - Pontal\n");
				scanf("%i", &empresa);
				if (empresa == 1){
					printf("Qual a quantidade de sa�da de a��car em Jatiboca?:\n");
					scanf("%f", &valor);
					if (valor >= 0){
						if (valor <= estoqueJ){
						estoqueJ = estoqueJ - valor;
						} else{
							printf("Estoque insuficiente.\n\n");
						}
					} else {
						printf("Valor negativo � inv�lido!\n");
					}
					printf("Estoque atualizado em Jatiboca: %.2f kg\n\n", estoqueJ);
				} else if (empresa == 2){
					printf("Qual a quantidade de sa�da de a��car em Pontal?:\n");
					scanf("%f", &valor);
					if (valor >= 0){
						if ( valor <= estoqueP){
						estoqueP = estoqueP - valor;
						} else {
							("Estoque insuficiente.\n\n");
						}
					} else {
						printf("Valor negativo � inv�lido!\n");
					}
					printf("Estoque atualizado em Pontal: %.2f kg\n\n", estoqueP);
				} else {
					printf("Comando inv�lido!\n\n");
				}
				break;
				
			case 3:
				printf("Para qual empresa?:\n1 - Jatiboca\n2 - Pontal\n");
				scanf("%i", &empresa);
				if (empresa == 1){
					printf("Qual a quantidade deseja tranferir de Pontal para Jatiboca?:\n");
					scanf("%f", &valor);
					if (valor >= 0){
						if ( valor <= estoqueP){
						estoqueJ = estoqueJ + valor;
						estoqueP = estoqueP - valor;
						} else {
							printf("Estoque insuficiente.\n\n");
						}
					} else {
						printf("Valor negativo � inv�lido!\n");
					}
					printf("Estoque atualizado em Jatiboca: %.2f kg\n", estoqueJ);
					printf("Estoque atualizado em Pontal: %.2f kg\n\n", estoqueP);
				} else if (empresa == 2){
					printf("Qual a quantidade deseja tranferir de Jatiboca para Pontal?:\n");
					scanf("%f", &valor);
					if (valor >= 0){
						if (valor <= estoqueJ){
						estoqueP = estoqueP + valor;
						estoqueJ = estoqueJ - valor;
						} else{
							printf("Estoque insuficiente.\n\n");
						}
					} else {
						printf("Valor negativo � inv�lido!\n");
					}
					printf("Estoque atualizado em Jatiboca: %.2f kg\n", estoqueJ);
					printf("Estoque atualizado em Pontal: %.2f kg\n\n", estoqueP);
				} else {
					printf("Comando inv�lido!");
				}
				break;
				
			case 4:
				printf("Estoque em Jatiboca: %.2f kg\n", estoqueJ);
				printf("Estoque em Pontal: %.2f kg\n\n", estoqueP);
				break;
			case 5:
				printf("Tenha um �timo dia e um bom trabalho!\n\n");
				break;
		}
	} while (comando != 5);
}
