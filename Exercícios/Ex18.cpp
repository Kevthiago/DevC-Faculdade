#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int A, B, C;
    
    printf("Digite dois valores inteiros:\n");
    scanf("%i%i", &A, &B);
    
    if (A == B){
    	C = A + B;
    	printf("A soma dos dois número é: %i\n", C);
	} else {
		C = A * B;
		printf("A multiplicação dos dois números é: %i\n", C);
	}
    
    printf("Os valores e o respectivo resultado do cálculo são: %i, %i, %i.", A, B, C);
    return(0);
}
