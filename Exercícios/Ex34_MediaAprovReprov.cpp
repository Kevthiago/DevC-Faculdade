#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int cnt = 1, aprov = 0, reprov = 0;
    float nota, soma = 0, media;
    
    while (cnt <= 10){
    	
    	printf("Digite a nota do aluno:\n");
    	scanf("%f", &nota);
    
    	if (nota >= 60){
   			aprov++;
   		}
    	else{
    		reprov++;
		}
		soma += nota;
		cnt++;		
	}
	media = soma / 10;
	printf("A m�dia das notas dos alunos �: %.2f\n", media);
	printf("O n�mero de alunos aprovados �: %i\n", aprov);
	printf("O n�mero de alunos reprovados �: %i\n", reprov);
	
	return(0);
}
    
