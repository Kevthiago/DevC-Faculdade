#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int vet1[5], vetR[5], cont;
	
	for(cont = 0; cont < 5; cont++){
		printf("Digite um n�mero inteiro para ser armazenado: ");
		scanf("%i", &vet1[cont]);
	}
	for(cont = 0; cont < 5; cont++){
		if(vet1[cont] % 2 != 0){
			vetR[cont] = vet1[cont] * 10;
		} else {
			vetR[cont] = vet1[cont];
		}
	}
	for(cont = 0; cont < 5; cont++){
		if (vet1[cont] % 2 != 0){
			printf("O valor �mpar (%i) multiplicado por 10 � igual a: %i\n", vet1[cont], vetR[cont]);
		}
	}
	return(0);
}
