#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int num;
    
    printf("Digite um n�mero para descobrir se ele �, ou n�o, divis�vel por 5:\n");
    scanf("%i", &num);;
    
    if (num % 5 == 0){
    	printf("Esse n�mero � divis�vel por 5!");
	} else {
		printf("Esse n�mero n�o � divis�vel por 5!");
		
	}
}
