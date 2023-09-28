#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int cnt = 1, num, pos = 0, neg = 0, soma = 0, soma2 = 0;
    
    while (cnt <= 5){
    	
    	printf("Digite um número:\n");
    	scanf("%i", &num);
    
    	if (num == 0){
    		printf("Nulo\n");
    		
		}
    	else if (num > 0 ){
   			pos++;
   			soma += num;
   			cnt++;
   		}
    	else{
    		neg++;
    		soma2 += num;
    		cnt++;
		}
    		
	}
	printf("A soma dos números positivos é:%i\n", soma);
	printf("A soma dos números negativos é:%i\n", soma2);
	
	return(0);
}
    

