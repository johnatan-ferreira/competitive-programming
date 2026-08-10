/**
* Problema: 2547 - Montanha-Russa
* Link: https://judge.beecrowd.com/pt/problems/view/2547
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	int n, min, max, i, cont=0;

	while (scanf("%d%d%d", &n, &min, &max) != EOF) {

		if ((n>=1) && (n<=100) && (min>=50) && (min<=250) && (max>=50) && (max<=250)) {

			int alt[n];

			for (i=0; i<n; i++) {

				scanf("%d", &alt[i]);

				if ((alt[i]>=min) && (alt[i]<=max)) {

					cont++;
				}
			}
			printf("%d\n", cont);
			cont=0;
		}
	}

	return 0;
}
