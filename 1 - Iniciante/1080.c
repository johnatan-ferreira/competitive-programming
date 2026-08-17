/**
* Problema: 1080 - Maior e Posição
* Link: https://judge.beecrowd.com/pt/problems/view/1080
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	int x, y[100], a, num, ind;

	num = y[0];
	ind=1;

	for (x=0; x<100; x++) {
		scanf("%d", &y[x]);
		if (y[x]>num) {
			num = y[x];
			ind = x+1;
		}
	}

	printf("%d\n%d\n", num, ind);

	return 0;
}
