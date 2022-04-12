#include <stdio.h>

int main(){
	
	int valor1 = 0;
	int valor2 = 0;
	
	printf("Digite valor 1 \n");
	scanf("%i", &valor1);
	printf("\nDigite valor 2 \n");
	scanf("%i", &valor2);
	
	if (valor2 > valor1){
		
		printf("\nValor2 (%i) e maior que Valor1 (%i)", valor2, valor1);
		
	}
	
	else if (valor1 > valor2){
		
		printf("\nValor1 (%i) e maior que Valor2 (%i)", valor1, valor2);
		
	}
	
	else{
		
		printf("\nValor1 (%i) e igual ao Valor2 (%i)", valor1, valor2);
		
	}
	
}
