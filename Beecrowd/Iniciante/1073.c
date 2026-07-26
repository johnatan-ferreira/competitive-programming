/**
* Problema: 1073 - Quadrado de Pares
* Link: https://judge.beecrowd.com/pt/problems/view/1073
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	int n, i;
	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
	    if ((i%2) == 0){
	        printf("%d^2 = %d\n", i, (i*i));
	    }
	}

	return 0;
}
