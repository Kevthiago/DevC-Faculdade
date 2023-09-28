#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    char timeA[50], timeB[50];
	int golsA, golsB;
	    
    printf("Digite o primeiro time da partida:\n");
    scanf("%s", &timeA);
    
    printf("Digite o segundo time da partida:\n");
    scanf("%s", &timeB);
    
    printf("Digite quantos gols o %s fez na partida:\n", timeA);
    scanf("%i", &golsA);
    
    printf("Digite quantos gols o %s fez na partida:\n", timeB);
    scanf("%i", &golsB);
       
    if (golsA > golsB){
    	printf("Vitória do time %s!", timeA);
	} else if (golsA < golsB){
    	printf("Vitória do time %s!", timeB);
	}else if (golsA == golsB){
    	printf("Empate!");
	}
    
    return(0);
}
    
