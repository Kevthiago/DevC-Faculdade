#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float preco_custo, preco_total;
    int quantidade;
    
    printf("Digite o preço de custo do produto: \n");
    scanf("%f", &preco_custo);
    
    printf("Digite a quantidade total do produto: \n");
    scanf("%i", &quantidade);
    
    preco_total = preco_custo * quantidade;
    
    printf("O valor total é: R$%.2f \n", preco_total);
}
    
