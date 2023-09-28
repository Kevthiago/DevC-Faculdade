#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float saldoM, credito, juros;
    
    printf("Digite o valor do saldo médio:\n");
    scanf("%f", &saldoM);
    
    if (saldoM > 4000){
    	credito = saldoM * 0.25;
    	juros = credito * 0.20;
	}
	else if (saldoM > 3000 && saldoM < 4000){
    	credito = saldoM * 0.20;
    	juros = credito * 0.15;
	}
	else if (saldoM > 2000 && saldoM < 3000){
    	credito = saldoM * 0.15;
    	juros = credito * 0.10;
	}
	else{
    	credito = saldoM * 0.10;
    	juros = credito * 0.05;
	}
	
	printf("O valor do saldo médio é R$%.2f\n", saldoM);
	printf("O valor do crédito é R$%.2f\n", credito);
	printf("O valor dos juros é R$%.2f", juros);
	
	return (0);

}
