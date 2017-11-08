#include <stdio.h>


int main(){
	int n, c, r;
	printf ("\n Digite um número entre 1 e 10: ");
	scanf("%d", &n); 
	for (c=1; c<=10; c++) {
			r= n*c;
			printf("\n %d x %d = %d", n, c, r);
		}

}
