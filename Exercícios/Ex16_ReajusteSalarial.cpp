#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    

    float salario, reajuste, novoSalario;
    
    printf("Digite o seu salário para descobrir o reajuste e o novo valor:\n");
    scanf("%f", &salario);
    
    if (salario < 500) {
    	reajuste = salario * 0.15;
    	novoSalario = salario + reajuste;
	} else if (salario >= 500 && salario <= 1000) {
		reajuste = salario * 0.1;
    	novoSalario = salario + reajuste;
	} else if (salario > 1000){
		reajuste = salario * 0.05;
    	novoSalario = salario + reajuste;
	}
    
    printf("O valor do reajuste será de R$%.2f, e o novo salário, sera de R$%.2f", reajuste, novoSalario);
}
