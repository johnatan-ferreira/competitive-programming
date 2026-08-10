/**
* Problema: 2221 - Batalha de Pomekons
* Link: https://judge.beecrowd.com/pt/problems/view/2221
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	int t, i, b, a1, d1, a2, d2, l1, l2;
	double ar1, ar2;

	scanf("%d", &t);

	for (i=0; i<t; i++) {

		scanf("%d", &b);

		if ((b>=0) && (b<=100)) {

			scanf("%d%d%d", &a1, &d1, &l1);

			if ((a1>=1) && (a1<=100) && (d1>=1) && (d1<=100) && (l1>=1) && (l1<=50)) {

				scanf("%d%d%d", &a2, &d2, &l2);

				if ((a2>=1) && (a2<=100) && (d2>=1) && (d2<=100) && (l1>=1) && (l2<=50)) {

					ar1 = (a1+d1)/2.0;
					ar2 = (a2+d2)/2.0;

					if (l1%2==0) {

						ar1 = ar1 + b;
					}

					if (l2%2==0) {

						ar2 = ar2 + b;
					}

					if (ar1>ar2) {

						printf("Dabriel\n");
					}

					if (ar1==ar2) {

						printf("Empate\n");
					}

					if (ar2>ar1) {

						printf("Guarte\n");
					}
				}
			}
		}
	}

	return 0;
}
