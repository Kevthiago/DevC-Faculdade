#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int nums[5], cont, somanums;
	somanums = 0;

	for(cont = 0; cont < 5; cont++){
	printf("Entre com os valores para serem armazenados:\n");
	scanf("%i", &nums[cont]);
	}
	
	for (cont = 0; cont < 5; cont++){
		somanums = somanums + nums[cont];
	}
	
	printf("\n\nOs números armazenados no array são:");
	for (cont = 0; cont < 5; cont++){
		printf(" %d", nums[cont]);
		}

		printf("\nO valor da soma dos números é: %i\n", somanums);
}


