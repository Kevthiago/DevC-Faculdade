#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int ajuste;
    float salario, novoS;
    
    printf("Digite seu salário:\n");
    scanf("%f", &salario);
    
    printf("Digite qual é a sua função, de acordo com o ID correspondente, para descobrir qual será o reajuste do seu salário:\n\n");
    printf("Gerente     (1)\nVendedor    (2)\nProgramador (3)\nMotorista   (4)\nVereador    (5)\nDeputado    (6)\n\n");
    scanf("%i", &ajuste);
    
    switch (ajuste){
    	case 1:
    		novoS = salario * 1.3;
    		printf("O salário novo será de R$%.2f:", novoS);
    		break;
    	case 2:
    		novoS = salario * 1.4;
    		printf("O salário novo será de R$%.2f:", novoS);
    		break;
    	case 3:
    		novoS = salario * 1.5;
    		printf("O salário novo será de R$%.2f:", novoS);
    		break;
    	case 4:
    		novoS = salario * 1.6;
    		printf("O salário novo será de R$%.2f:", novoS);
    		break;
    	case 5:
    		printf("O salário não terá ajuste.");
    		break;
    	case 6:
    		printf("O salário não terá ajuste.");
    		break;
    	default:
    		printf("O número digitado não representa nenhum ID.");
	}
	return(0);
}
    
