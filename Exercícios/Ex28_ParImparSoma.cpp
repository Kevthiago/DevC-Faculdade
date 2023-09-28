#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int num, par = 0, imp = 0, soma, soma2, cnt = 0;
    
    while(cnt < 15){
    	printf("Digite um número:\n");
    	scanf("%i", &num);
    	
    	if (num == 0){
			printf("Nulo!\n");
		}
    	else if (num % 2 == 0){
    		soma += num;
    		par++;	
		}
		else if (num % 2 != 0){
			soma2 += num;
			imp++;
		}
		cnt++;
	}
	printf("\nA quantidade de números pares é: %i\n", par);
	printf("A quantidade de números ímpares é: %i\n", imp);
	printf("A soma dos números pares é: %i\n", soma);
	printf("A soma dos números ímpares é: %i\n", soma2);
	
	
	return(0);
}
