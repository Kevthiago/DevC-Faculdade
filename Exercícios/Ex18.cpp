#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int A, B, C;
    
    printf("Digite dois valores inteiros:\n");
    scanf("%i%i", &A, &B);
    
    if (A == B){
    	C = A + B;
    	printf("A soma dos dois n�mero �: %i\n", C);
	} else {
		C = A * B;
		printf("A multiplica��o dos dois n�meros �: %i\n", C);
	}
    
    printf("Os valores e o respectivo resultado do c�lculo s�o: %i, %i, %i.", A, B, C);
    return(0);
}
