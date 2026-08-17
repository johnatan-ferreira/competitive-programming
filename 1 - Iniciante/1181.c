/**
* Problema: 1181 - Linha na Matriz
* Link: https://judge.beecrowd.com/pt/problems/view/1181
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	double m[12][12], x=0;
	int l;
	char t;

	scanf("%d", &l);
	getchar();
	scanf("%c", &t);

	for(int i=0; i<12; i++) {

		for(int j=0; j<12; j++) {

			scanf("%lf", &m[i][j]);
		}
	}

	if(t=='S') {

		for(int i=0; i<12; i++) {

			x = x + m[l][i];
		}

		printf("%.1lf\n", x);
	} else {

		for(int i=0; i<12; i++) {

			x = x + m[l][i];
		}

		x = x/12;
		printf("%.1lf\n", x);
	}

	return 0;
}