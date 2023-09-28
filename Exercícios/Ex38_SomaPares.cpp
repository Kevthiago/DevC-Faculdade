#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
	
	int num = 1, par = 0;
	
	while (num != 0) {
		printf("Digite um número ou pressione 0 para encerrar:\n");
		scanf("%i", &num);
		
		if (num != 0){
			if(num % 2 == 0){
				par++;
			} 
		}
	}
	printf("A quantidade dos números pares é: %i", par);
}
