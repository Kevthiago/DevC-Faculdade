#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int mes;
    
    printf("Digite um n�mero de 1 a 12 para descobrir o m�s correspondente:\n");
    scanf("%i", &mes);
    	
	switch (mes){
    	case 1:
    		printf("O m�s correspondente � Janeiro");
    		break;
    	case 2:
    		printf("O m�s correspondente � Fevereiro");
    		break;
    	case 3:
    		printf("O m�s correspondente � Mar�o");
    		break;
    	case 4:
    		printf("O m�s correspondente � Abril");
    		break;
    	case 5:
    		printf("O m�s correspondente � Maio");
    		break;
    	case 6:
    		printf("O m�s correspondente � Junho");
    		break;
    	case 7:
    		printf("O m�s correspondente � Julho");
    		break;
    	case 8:
    		printf("O m�s correspondente � Agosto");
    		break;
    	case 9:
    		printf("O m�s correspondente � Setembro");
    		break;
    	case 10:
    		printf("O m�s correspondente � Outubro");
    		break;
    	case 11:
    		printf("O m�s correspondente � Novembro");
    		break;
    	case 12:
    		printf("O m�s correspondente � Dezembro");
    		break;
    	default:
    	printf("N�mero inv�lido!\n");	
	}
    return(0);
}
