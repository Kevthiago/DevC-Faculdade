#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float num, soma, media, dobro;
    int cnt;
    
    cnt = 0;
    while(cnt <= 4){
    	printf("Digite um número:\n");
    	scanf("%f", &num);
    	soma += num;
    	media += num / 5;
    	dobro = num * 2;
    	printf("O dobro do número é: %.2f\n\n", dobro);
        cnt++; 	
 }
 
    printf("\nA soma dos 5 números é: %.2f\n", soma);
    printf("A média dos 5 números é: %.2f\n", media);
    
    return(0);
}


