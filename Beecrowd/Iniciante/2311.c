/**
* Problema: 2311 - Saltos Ornamentais
* Link: https://judge.beecrowd.com/pt/problems/view/2311
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	int t, i, j;
	char nome[10];
	double valor, n[7], maior, menor;

	scanf("%d", &t);

	for (i=0; i<t; i++) {

		scanf("%s", nome);

		scanf("%lf", &valor);

		scanf("%lf%lf%lf%lf%lf%lf%lf", &n[0], &n[1], &n[2], &n[3], &n[4], &n[5], &n[6]);

		if (n[0]>n[1]) {

			maior = n[0];
			menor = n[1];
		} else if (n[0] == n[1]) {

			maior = n[0];
			menor = maior;
		} else {

			maior = n[1];
			menor = n[0];
		}

		for (j=2; j<7; j++) {

			if (n[j]>maior) {

				maior = n[j];
			}

			if (n[j]<menor) {

				menor = n[j];
			}
		}

		for (j=1; j<7; j++) {

			n[0] = n[0] + n[j];
		}

		n[0] = ((n[0] - (maior+menor))*valor);

		printf("%s %.2lf\n", nome, n[0]);
	}

	return 0;
}
