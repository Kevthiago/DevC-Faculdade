#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int num, par = 0, imp = 0, cnt = 0;
    
    while(cnt < 10){
    	printf("Digite um número:\n");
    	scanf("%i", &num);
    	if (num == 0){
			printf("Nulo!\n");
		}
		else if (num % 2 == 0){
			par++;
		}
		else{
    		imp++;
		}
		cnt++;
	}
	printf("\nA quantidade de números pares é: %i\n", par);
	printf("A quantidade de números ímpares é: %i", imp);
	return(0);
}
