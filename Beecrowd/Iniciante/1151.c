/**
* Problema: 1151 - Fibonacci Fácil
* Link: https://judge.beecrowd.com/pt/problems/view/1151
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	int x, y;

	scanf("%d", &x);
	
	int z[x];

	z[0] = 0;
	z[1] = 1;
	
	for (y=0; y<x; y++) {

		if (y==0) {
			printf("%d", (z[0]));
		} else if (y==1) {
			printf(" %d", z[1]);
		} else {
		    z[y] = ((z[y-1])+(z[y-2]));
		    printf(" %d", z[y]);
		}
	}
	
	printf("\n");

	return 0;
}