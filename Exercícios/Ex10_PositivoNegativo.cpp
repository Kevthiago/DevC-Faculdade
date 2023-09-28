#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um número para ser avaliado:\n");
	scanf("%i", &num);
	
	if (num < 0){
		printf("O número é negativo.");
	} else if (num > 0){
		printf("O número é positivo");
	}
}
