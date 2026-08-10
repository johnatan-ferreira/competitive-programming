/**
* Problema: 1037 - Intervalo
* Link: https://judge.beecrowd.com/pt/problems/view/1037
* Descrição: Dado um valor X, dizer se ele está em algum dos intervalos: [0,25], (25,50], (50,75], (75,100]
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	double num;
	int result;

	while(1) {

		result = scanf("%lf", &num);

		if (result != 1) {

			while(getchar() != '\n');
			continue;
		} else {
			break;
		}
	}

	if (num>=0 || num<=100) {

		if (num>=0 && num<=25) {
			printf("Intervalo [0,25]\n");
		}

		if (num>25 && num<=50) {
			printf("Intervalo (25,50]\n");
		}

		if (num>50 && num<=75) {
			printf("Intervalo (50,75]\n");
		}

		if (num>75 && num<=100) {
			printf("Intervalo (75,100]\n");
		}
	}

	if (num<0 || num>100) {
		printf("Fora de intervalo\n");
	}

	return 0;
}
