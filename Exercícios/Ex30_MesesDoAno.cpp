#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int mes;
    
    printf("Digite um número de 1 a 12 para descobrir o mês correspondente:\n");
    scanf("%i", &mes);
    	
	switch (mes){
    	case 1:
    		printf("O mês correspondente é Janeiro");
    		break;
    	case 2:
    		printf("O mês correspondente é Fevereiro");
    		break;
    	case 3:
    		printf("O mês correspondente é Março");
    		break;
    	case 4:
    		printf("O mês correspondente é Abril");
    		break;
    	case 5:
    		printf("O mês correspondente é Maio");
    		break;
    	case 6:
    		printf("O mês correspondente é Junho");
    		break;
    	case 7:
    		printf("O mês correspondente é Julho");
    		break;
    	case 8:
    		printf("O mês correspondente é Agosto");
    		break;
    	case 9:
    		printf("O mês correspondente é Setembro");
    		break;
    	case 10:
    		printf("O mês correspondente é Outubro");
    		break;
    	case 11:
    		printf("O mês correspondente é Novembro");
    		break;
    	case 12:
    		printf("O mês correspondente é Dezembro");
    		break;
    	default:
    	printf("Número inválido!\n");	
	}
    return(0);
}
