/**
* Problema: 1189 - Área Esquerda
* Link: https://judge.beecrowd.com/pt/problems/view/1189
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	double m[12][12], x=0;
	char t;
	int cont=0;

	scanf("%c", &t);

	for(int i=0; i<12; i++) {

		for(int j=0; j<12; j++) {

			scanf("%lf", &m[i][j]);
		}
	}

	for(int i=0; i<12; i++) {

		for(int j=0; j<12; j++) {

			if((i>j) && ((i+j)<11)) {

				x = x + m[i][j];
				cont++;
			}
		}
	}

	if(t=='S') {

		printf("%.1lf\n", x);
	} else {

		x = x/cont;
		printf("%.1lf\n", x);
	}

	return 0;
}
