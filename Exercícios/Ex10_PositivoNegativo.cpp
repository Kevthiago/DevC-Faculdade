#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um n�mero para ser avaliado:\n");
	scanf("%i", &num);
	
	if (num < 0){
		printf("O n�mero � negativo.");
	} else if (num > 0){
		printf("O n�mero � positivo");
	}
}
