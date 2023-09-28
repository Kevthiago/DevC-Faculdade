#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vet1[10], vet2[10], vetsoma[10], cont;
	
	for(cont = 1; cont <= 10; cont++){
		printf("Digite um número para ser armazenado no 1° vetor: ");
		scanf("%i", &vet1[cont]);
	}	
	for(cont = 1; cont <= 10; cont++){
		printf("Digite um número para ser armazenado no 2° vetor: ");
		scanf("%i", &vet2[cont]);
	}
	for(cont = 1; cont <= 10; cont++){
		vetsoma[cont] = vet1[cont] + vet2[cont];
	}
	for(cont = 10; cont > 0; cont--){
		printf("\n\nA soma dos termos dos vetores de trás pra frente é: %i", vetsoma[cont]);
	}	
}
