#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
	
	int cnt = 0, num, par = 0, imp = 0, soma = 0, soma2 = 0;
	
	while (cnt < 5) {
		printf("Digite um número:\n");
		scanf("%i", &num);
		
		if (num != 0){
			if(num % 2 == 0){
				par++;
				soma += num;
			} else {
				imp++;
				soma2 += num;
			}
			cnt++;
		}
		
	}
	printf("A quantidade dos números pares é: %i\n", par);
	printf("A quantidade dos números ímpares é: %i\n", imp);
	printf("A soma dos números pares é: %i\n", soma);
	printf("A soma dos números ímpares é: %i\n", soma2);
}
