#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float num, soma, media, dobro;
    int cnt;
    
    cnt = 0;
    while(cnt <= 4){
    	printf("Digite um n�mero:\n");
    	scanf("%f", &num);
    	soma += num;
    	media += num / 5;
    	dobro = num * 2;
    	printf("O dobro do n�mero �: %.2f\n\n", dobro);
        cnt++; 	
 }
 
    printf("\nA soma dos 5 n�meros �: %.2f\n", soma);
    printf("A m�dia dos 5 n�meros �: %.2f\n", media);
    
    return(0);
}


