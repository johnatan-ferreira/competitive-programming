/**
* Problema: 1078 - Tabuada
* Link: https://judge.beecrowd.com/pt/problems/view/1078
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	int n, i;
	
	scanf("%d", &n);
	
	for (i=1; i<=10; i++){
	    printf("%d x %d = %d\n", i, n, (i*n));
	}

	return 0;
}
