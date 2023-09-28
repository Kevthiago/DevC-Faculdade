#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int num;
    
    printf("Digite um número para descobrir se ele é, ou não, divisível por 5:\n");
    scanf("%i", &num);;
    
    if (num % 5 == 0){
    	printf("Esse número é divisível por 5!");
	} else {
		printf("Esse número não é divisível por 5!");
		
	}
}
