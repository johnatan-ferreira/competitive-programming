/**
* Problema: 1983 - O Escolhido
* Link: https://judge.beecrowd.com/pt/problems/view/1983
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	int x, i, mm;

	scanf("%d", &x);

	int z[x], matr[x];
	double nota[x], not_maior;

	if ((x>=3) && (x<=100)) {

		for (i=0; i<x; i++) {

			scanf("%d%lf", &matr[i], &nota[i]);

			if ((matr[i]>0) && (matr[i]<1000000)) {

				int a;
				
				not_maior = nota[0];
				mm = matr[0];

				for (a=1; a<x; a++) {
				    
					if (nota[a]>not_maior) {
						not_maior = nota[a];
						mm = matr[a];
					}
				}
			}
		}
	} else {
	    return 0;
	}

	if (not_maior<8.0) {
		printf("Minimum note not reached\n");
	} else {
		printf("%d\n", mm);
	}

	return 0;
}
