#include <stdio.h>

int main (){
	
	int x = 0;
	int y;
	
	printf("Digite um numero inteiro \n");
	scanf("%i", &x);
	printf("N�mero digitado %i\n", x);
	printf("Tabuada: \n");
	
	for (y=0; y<=10; y++){
		
		printf("%ix%i = %i\n", x, y, x * y);
		
	}
	
	return 0;
}
