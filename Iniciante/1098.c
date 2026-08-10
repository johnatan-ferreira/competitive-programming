/**
* Problema: 1098 - Sequencia IJ 4
* Link: https://judge.beecrowd.com/pt/problems/view/1098
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	double i, j;
	int a, b;

	for (i=0; i<=2; i=i) {

		for (j=1; j<=3; j++) {

			a = i*10;
			a = a%10;

			if (a==0) {

				printf("I=%.0lf J=%.0lf\n", i, (j+i));
			} else {

				b = ((j+i)*10);
				b = b%10;

				if (b==0) {

					printf("I=%.0lf J=%.0lf\n", i, (j+i));
				} else {

					printf("I=%.1lf J=%.1lf\n", i, (j+i));
				}
			}
		}

		i = i + 0.2;
	}

	return 0;
}
