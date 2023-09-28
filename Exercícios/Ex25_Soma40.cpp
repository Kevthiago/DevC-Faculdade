#include <stdio.h>
#include <locale.h>

// INCOMPLETO

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float num;
    int cnt;
    
    cnt = 1;
    while(cnt < 10){
    	printf("Digite um número:\n");
    	scanf("%f", &num);
    	if (num < 0){
    		printf("%f\n", num);
		}
		else{
			printf("%f\n", num);
		}
	}
	return(0);
}
