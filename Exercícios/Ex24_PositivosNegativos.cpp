#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int num, pos = 0, neg = 0, cnt = 0;
    
    while(cnt < 10){
    	printf("Digite um número:\n");
    	scanf("%i", &num);
    	if (num > 0){
    		pos++;
		}
		else{
			neg++;
		}
		cnt++;
	}
	printf("\nA quantidade de números positivos é: %i\n", pos);
	printf("A quantidade de números negativos é: %i", neg);
	return(0);
}


