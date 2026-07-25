/**
* Problema: 1064 - Positivos e Média
* Link: https://judge.beecrowd.com/pt/problems/view/1064
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	double x, w, z;
	int i;

	for(i=0; i<=5; i++) {

		scanf("%lf", &x);

		if (x>0) {
			z++;
			w = w + x;
		}
	}

	printf("%.0lf valores positivos\n", z);
	printf("%.1lf\n", (w/z));

	return 0;
}
