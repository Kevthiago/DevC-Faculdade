#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um n�mero para ser avaliado como par, �mpar ou nulo:\n");
	scanf("%i", &num);
	
	if (num == 0){
		printf("O n�mero � nulo!");
	} else if (num % 2 == 0){
		printf("O n�mero � par!");
	} else {
		printf("O n�mero � �mpar!");
	}
}
