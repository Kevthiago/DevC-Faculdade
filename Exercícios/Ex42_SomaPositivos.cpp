#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
	
	int num = 1, pos = 0, soma = 0;
	
	while (num != 0) {
		printf("Digite um número ou pressione 0 para encerrar:\n");
		scanf("%i", &num);
		
		if (num != 0){
			if(num > 0){
				soma += num;
				pos++;
			} 
		}
	}
	printf("A soma dos números positivos é: %i", soma);
}
