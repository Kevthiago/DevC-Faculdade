#include <stdio.h>
#include <locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
    int num, par = 0;
    
    do {
    	if (num != 0){
			printf("Entre com um número:\n");
	    	scanf("%i", &num);
	    	if (num == 0){
	    		printf("NULO.\n");
			} else if (num % 2 == 0){
	    		par++;
			}
		}
	} while (num != 0);
	printf("A quantidade de números pares é: %i\n", par);
	
}
