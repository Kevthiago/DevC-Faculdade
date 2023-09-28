#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float custo, distri, impostos, total;
    
    printf("Digite o custo de fábrica do veículo:\n");
    scanf("%f", &custo);

    
    if(custo <= 15000){
    	distri = custo * 0.1;
    	impostos = custo * 0.35;
    	total = custo + distri + impostos;
	} 
	else if (custo > 15000 && custo < 20000){
		distri = custo * 0.11;
    	impostos = custo * 0.40;
    	total = custo + distri + impostos;
	} 
	else if (custo > 20000 && custo < 40000){
		distri = custo * 0.12;
    	impostos = custo * 0.45;
    	total = custo + distri + impostos;
	} 
	else if (custo > 40000){
		distri = custo * 0.13;
    	impostos = custo * 0.50;
    	total = custo + distri + impostos;
	}
	
	printf("O valor de custo do veículo é: R$%.2f\n", custo);
	printf("O valor arrecadado pela distribuidora é: R$%.2f\n", distri);
	printf("O valor arrecadado na forma de impostos é: R$%.2f\n", impostos);
	printf("O valor total do veículo é: R$%.2f", total);
	
	return (0);    
}

