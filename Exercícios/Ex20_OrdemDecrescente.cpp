#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int A, B;
    
    printf("Digite dois valores:\n");
    scanf("%i%i", &A, &B);
    
    if (A > B){
    	printf("A ordem decrescente dos valores �: %i, %i.", A, B);
	} else {
		printf("A ordem decrescente dos valores �: %i, %i.", B, A);
	}
	
	return(0);
	
}
