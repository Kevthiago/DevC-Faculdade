#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int idade;
    
    printf("Digite a sua idade:\n");
    scanf("%i", &idade);
    
    if (idade < 16){
    	printf("N�o eleitor.");
	} else if (idade >= 18 && idade <= 65){
		printf("Eleitor obrigat�rio.");
	} else if (idade >= 16 && idade < 18 || idade > 65){
		printf("Eleitor facultativo.");
	}
	
	return(0);
}
