#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float A, B, soma, sub;
	
	printf("Digite dois valores para serem somados e subtraídos:\n");
	scanf("%f", &A);
	scanf("%f", &B);
	
	soma = A + B;
	sub = A - B;
	
	printf("O valor da soma entre os números A e B é:.", soma);
	printf("O valor da subtração entre os números A e B é:.", sub);
	
	
}
