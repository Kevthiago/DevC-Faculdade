#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int num, par = 0, imp = 0, soma, soma2, cnt = 0;
    
    while(cnt < 15){
    	printf("Digite um n�mero:\n");
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
	printf("\nA quantidade de n�meros pares �: %i\n", par);
	printf("A quantidade de n�meros �mpares �: %i\n", imp);
	printf("A soma dos n�meros pares �: %i\n", soma);
	printf("A soma dos n�meros �mpares �: %i\n", soma2);
	
	
	return(0);
}
