#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int ajuste;
    float salario, novoS;
    
    printf("Digite seu sal�rio:\n");
    scanf("%f", &salario);
    
    printf("Digite qual � a sua fun��o, de acordo com o ID correspondente, para descobrir qual ser� o reajuste do seu sal�rio:\n\n");
    printf("Gerente     (1)\nVendedor    (2)\nProgramador (3)\nMotorista   (4)\nVereador    (5)\nDeputado    (6)\n\n");
    scanf("%i", &ajuste);
    
    switch (ajuste){
    	case 1:
    		novoS = salario * 1.3;
    		printf("O sal�rio novo ser� de R$%.2f:", novoS);
    		break;
    	case 2:
    		novoS = salario * 1.4;
    		printf("O sal�rio novo ser� de R$%.2f:", novoS);
    		break;
    	case 3:
    		novoS = salario * 1.5;
    		printf("O sal�rio novo ser� de R$%.2f:", novoS);
    		break;
    	case 4:
    		novoS = salario * 1.6;
    		printf("O sal�rio novo ser� de R$%.2f:", novoS);
    		break;
    	case 5:
    		printf("O sal�rio n�o ter� ajuste.");
    		break;
    	case 6:
    		printf("O sal�rio n�o ter� ajuste.");
    		break;
    	default:
    		printf("O n�mero digitado n�o representa nenhum ID.");
	}
	return(0);
}
    
