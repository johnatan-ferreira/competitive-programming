/**
* Problema: 1117 - Validação de Nota
* Link: https://judge.beecrowd.com/pt/problems/view/1117
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	double n1, n2;
	int i;

	for (i=0; i<1; i++) {

		scanf("%lf", &n1);

		if ((n1>10) || (n1<0)) {

			printf("nota invalida\n");
			i = i - 1;
		}
	}

	for (i=0; i<1; i++) {

		scanf("%lf", &n2);

		if ((n2>10) || (n2<0)) {

			printf("nota invalida\n");
			i = i - 1;
		}
	}
	
	printf("media = %.2lf\n", ((n1+n2)/2));

	return 0;
}
