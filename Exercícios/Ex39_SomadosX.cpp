#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
	
	int num = 1, soma = 0;
	
	while (num != 0) {
		printf("Digite um n�mero ou pressione 0 para encerrar:\n");
		scanf("%i", &num);
		
		if (num != 0){
			soma += num;
		}
	}
	printf("A soma dos n�meros �: %i", soma);
}

