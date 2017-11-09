#include <stdio.h>

/* Dado um número teal x e um natural n, exiba a potência x^n.*/

int main(){

	int x, n, i; 
	int pot = 1;
	
	printf("\n\n Digite um número \n\n");
	scanf("%i", &x);
	printf("\n\n Digite um número para ser potência \n\n");
	scanf("%i", &n);
	
	for(i = 1; i <=n; i++) {
		
		pot *= x;
		
	}
		printf("\n\n %i elevado a %i = %i", x, n, pot);
		


return 0;

}
