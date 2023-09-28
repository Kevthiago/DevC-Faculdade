#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float notaA, notaB, notaC, media;
    
    printf("Digite a primeira nota: \n");
    scanf("%f", &notaA);
    
    printf("Digite a segunda nota: \n");
    scanf("%f", &notaB);
    
    printf("Digite a terceira nota: \n");
    scanf("%f", &notaC);
    
    media = (notaA + notaB + notaC) / 3;
    
    printf("A média das notas do aluno é: \n %.2f", media);
    
}
