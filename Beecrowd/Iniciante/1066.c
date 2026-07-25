/**
* Problema: 1066 - Pares, Ímpares, Positivos e Negativos
* Link: https://judge.beecrowd.com/pt/problems/view/1066
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	int x, i, par=0, impar=0, posit=0, negat=0;

	for (i=0; i<=4; i++) {

		scanf("%d", &x);

		if ((x%2) == 0) {
			par++;
		}
		if ((x%2) != 0) {
			impar++;
		}
		if (x>0) {
			posit++;
		}
		if (x<0) {
			negat++;
		}
	}

	printf("%d valor(es) par(es)\n", par);
	printf("%d valor(es) impar(es)\n", impar);
	printf("%d valor(es) positivo(s)\n", posit);
	printf("%d valor(es) negativo(s)\n", negat);

	return 0;
}
