#include <stdio.h>
#include <locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
    int num, par = 0;
    
    do {
    	if (num != 0){
			printf("Entre com um n�mero:\n");
	    	scanf("%i", &num);
	    	if (num == 0){
	    		printf("NULO.\n");
			} else if (num % 2 == 0){
	    		par++;
			}
		}
	} while (num != 0);
	printf("A quantidade de n�meros pares �: %i\n", par);
	
}
