#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um número para ser avaliado como par, ímpar ou nulo:\n");
	scanf("%i", &num);
	
	if (num == 0){
		printf("O número é nulo!");
	} else if (num % 2 == 0){
		printf("O número é par!");
	} else {
		printf("O número é ímpar!");
	}
}
