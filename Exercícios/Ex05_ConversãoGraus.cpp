#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float celsius, faren;
    
    printf("Qual � a temperatura em �C?\n");
    scanf("%f", &celsius);
    
    faren = (celsius * 9/5) + 32;
    
    printf("A temperatura convertida para Farenheit �:\n%.2f", faren);
    
}
