#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int vet1[5], vetR[5], cont;
	
	for(cont = 0; cont < 5; cont++){
		printf("Digite um número inteiro para ser armazenado: ");
		scanf("%i", &vet1[cont]);
	}
	for(cont = 0; cont < 5; cont++){
		if(cont % 2 != 0){
			vetR[cont] = cont * 10;
		} else {
			vetR[cont] = cont;
		}
	}
	for(cont = 0; cont < 5; cont++){
		if (cont % 2 != 0){
			printf("O valor do índice ímpar (%i) multiplicado por 10 é igual a: %i\n", cont, vetR[cont]);
		}
	}
	return(0);
}
