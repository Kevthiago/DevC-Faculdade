#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float baseMenor, baseMaior, altura, area;
    
    printf("Digite a base menor, base maior e a altura, respectivamente: \n");
    scanf("%f%f%f", &baseMenor, &baseMaior, &altura);
    
    area = ((baseMaior + baseMenor) * altura) / 2;
    
    printf("A área do trapézio é:\n %.2f", area);
    
}
