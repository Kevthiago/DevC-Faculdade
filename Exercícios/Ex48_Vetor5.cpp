#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int nums[5], cont;
	
	for(cont = 0; cont < 5; cont++){
		printf("Digite o valor para ser armazenado: ");
		scanf("%i", &nums[cont]);
	}
	for(cont = 0; cont < 5; cont++){
		printf("O valor armazenado é: %i\n", nums[cont]);
	}
	
}
