#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int idade, maior = 0, menor = 0, entre = 0, cnt = 0;
    
    while(cnt < 10){
    	printf("Digite a idade:\n");
    	scanf("%i", &idade);
    	if (idade < 21){
    		menor++;
		}
		else if (idade > 50){
			maior++;
		}
		else if (idade >= 21 && idade <=50){
			entre++;
		}
		cnt++;
	}
	printf("\nA quantidade de pessoa com menos de 21 anos é: %i\n", menor);
	printf("A quantidade de pessoas com mais de 50 anos é: %i\n", maior);
	printf("A quantidade de pessoas com idade entre 21 e 50 anos é: %i", entre);
	return(0);
}


