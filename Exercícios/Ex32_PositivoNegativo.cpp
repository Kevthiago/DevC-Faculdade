#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int cnt = 1, num, pos = 0, neg = 0;
    
    while (cnt <= 5){
    	
    	printf("Digite um n�mero:\n");
    	scanf("%i", &num);
    
    	if (num == 0){
    		printf("Nulo\n");
    		
		}
    	else if (num > 0 ){
   			pos++;
   			cnt++;
   		}
    	else{
    		neg++;
    		cnt++;
		}
    		
	}
	printf("A quantidade de n�meros positivos �:%i\n", pos);
	printf("A quantidade de n�meros negativos �:%i\n", neg);
	
	return(0);
}
    
