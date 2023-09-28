#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float salbase, salreceber, gratificacao, impostos;
	
	printf("Digite o valor de salbase:\n");
	scanf("%f", &salbase);
	
	gratificacao = salbase * 0,05;
	salreceber = salbase + gratificacao;
	impostos = salreceber * 7/100;
	salreceber = salreceber - impostos;
	
	printf("%.2f", salreceber);
	
}
