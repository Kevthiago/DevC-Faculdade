#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float A, B, soma, sub;
	
	printf("Digite dois valores para serem somados e subtra�dos:\n");
	scanf("%f", &A);
	scanf("%f", &B);
	
	soma = A + B;
	sub = A - B;
	
	printf("O valor da soma entre os n�meros A e B �:.", soma);
	printf("O valor da subtra��o entre os n�meros A e B �:.", sub);
	
	
}
