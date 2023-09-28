#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int A, B;
    
    printf("Digite dois valores:\n");
    scanf("%i%i", &A, &B);
    
    if (A > B){
    	printf("A ordem crescente dos valores é: %i, %i.", B, A);
	} else {
		printf("A ordem crescente dos valores é: %i, %i.", A, B);
	}
	
	return(0);
	
}
