#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
	
	int num = 1, neg = 0;
	
	while (num != 0) {
		printf("Digite um n�mero ou pressione 0 para encerrar:\n");
		scanf("%i", &num);
		
		if (num != 0){
			if (num < 0){
				neg++;
			}	
		}
	}
	printf("A quantidade de n�meros negativos �: %i", neg);
}

