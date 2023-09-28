#include <stdio.h>
#include <locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
    int num = 1, soma = 0, qt = 0;
    float media = 0;
    
    while (num != 0){
        
        printf("Digite um número ou insira < 0 > para finalizar: \n");
        scanf("%i", &num);
    
        if(num != 0){
            qt++;
            soma += num;
        }
    }
    media = float(soma)/float(qt);
    printf("A média dos valores inseridos é: %.2f\n", media);
    printf("A quantidade de valores digitados foi: %i\n", qt);
}
