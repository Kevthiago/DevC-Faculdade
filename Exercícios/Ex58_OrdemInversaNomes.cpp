/*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    char vet1[8][30], vetR[8][30];
    int cont, i;
    
    for (cont = 0; cont < 8; cont++) {
        printf("Digite um nome para ser armazenado no arranjo: ");
        scanf("%s", vet1[cont]);
    }
    
    for (cont = 0; cont < 8; cont++) {
        for (i = 0; vet1[cont][i] != '\0'; i++) {
            vetR[7 - cont][i] = vet1[cont][i];
        }
        vetR[7 - cont][i] = '\0';
    }
    
    printf("O vetor resultante, com os nomes em ordem invertida é: ");
    for (cont = 7; cont >= 0; cont--) {
        printf("%s ", vetR[cont]);
    }
    
    return 0;
}
/*/

