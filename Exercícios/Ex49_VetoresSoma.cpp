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
	
	printf("\n\nOs n�meros armazenados no array s�o:");
	for (cont = 0; cont < 5; cont++){
		printf(" %d", nums[cont]);
		}

		printf("\nO valor da soma dos n�meros �: %i\n", somanums);
}


