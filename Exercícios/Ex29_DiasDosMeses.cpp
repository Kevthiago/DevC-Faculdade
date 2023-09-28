#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int mes;
    
    printf("Digite o número do mês para descobrir quantos dias ele tem:\n");
    scanf("%i", &mes);
    	
	switch (mes){
    	case 1:
    		printf("O mês correspondente possui 31 dias.");
    		break;
    	case 2:
    		printf("O mês correspondente possui 28 dias (ou 29, quando for ano bissexto).");
    		break;
    	case 3:
    		printf("O mês correspondente possui 31 dias.");
    		break;
    	case 4:
    		printf("O mês correspondente possui 30 dias.");
    		break;
    	case 5:
    		printf("O mês correspondente possui 31 dias.");
    		break;
    	case 6:
    		printf("O mês correspondente possui 30 dias.");
    		break;
    	case 7:
    		printf("O mês correspondente possui 31 dias.");
    		break;
    	case 8:
    		printf("O mês correspondente possui 31 dias.");
    		break;
    	case 9:
    		printf("O mês correspondente possui 30 dias.");
    		break;
    	case 10:
    		printf("O mês correspondente possui 31 dias.");
    		break;
    	case 11:
    		printf("O mês correspondente possui 30 dias.");
    		break;
    	case 12:
    		printf("O mês correspondente possui 31 dias.");
    		break;
    	default:
    	printf("Número inválido! Não existe mês com esse número.\n");	
	}
    return(0);
}
