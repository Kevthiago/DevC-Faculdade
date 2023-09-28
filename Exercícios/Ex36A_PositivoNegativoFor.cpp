#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
	
	int cnt = 0, num, soma = 0, soma2 = 0, pos = 0, neg = 0;
	float mediapos = 0, medianeg = 0;
	
	for (cnt = 0; cnt < 5; cnt ++){
		
		printf("Digite um número inteiro:\n");
		scanf("%i", &num);
		
		if (num != 0){
			if (num > 0){
				soma += num;
				pos++;
				
			} else {
				soma2 += num;
				neg++;
			}
		} else {
			cnt--;
		}
	}
	if (pos>0)
	   mediapos = float(soma)/ float(pos);
	
	if (neg>0)
	   medianeg = float(soma2)/ float(neg);
	
	printf("A média dos números positivos é: %.2f\n", mediapos);
	printf("A média dos números negativos é: %.2f\n", medianeg);
}
