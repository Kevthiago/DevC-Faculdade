#include <stdio.h>
#include <locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
    int num, neg = 0, pos = 0;
    
    do {
    	printf("Entre com um número:\n");
    	scanf("%i", &num);
    	if (num == 0){
    		printf("Nulo.\n");
		} else {
			if (num > 0){
				pos++;
			} else {
				neg++;
			}
		}
	} while (num < 5);
	printf("A quantidade de números positivos é: %i\n", pos);
	printf("A quantidade de números negativos é: %i\n", neg);
}
