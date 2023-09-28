#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, nums1[5], nums2[5];
	
	for(i = 0; i < 5; i++){
		printf("Digite o valor para ser armazenado:\n");
		scanf("%i", &nums1[i]);
	}
	for(i = 0; i < 5; i++){
		nums2[i] = nums1[i] + 2;
	}
	
	printf("Os valores armazenados são:\n");
	for(i = 0; i < 5; i++){
		printf(" %i", nums1[i]);
	}
	
	printf("\nOs valores atualizados são:\n");
	for(i = 0; i < 5; i++){
		printf(" %i", nums2[i]);
	}
}
		
