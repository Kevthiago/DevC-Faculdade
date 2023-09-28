#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int valA, valB, soma;
    printf("Digite dois valores para serem somados: \n");
    scanf("%i", &valA);
    scanf("%i", &valB);
    
    soma = valA + valB;
    
    printf("O valor da soma é: %i", soma);
}
