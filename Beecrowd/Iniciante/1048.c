/**
* Problema: 1048 - Aumento de Salário
* Link: https://judge.beecrowd.com/pt/problems/view/1048
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	double sal;

	while(1) {

		int x = scanf("%lf", &sal);

		if ((x != 1) || (sal<0)) {
			while(getchar() != '\n');
			continue;
		} else {
			break;
		}
	}

	if ((sal>=0) && (sal<=400)) {
		printf("Novo salario: %.2lf\n", (sal*1.15));
		printf("Reajuste ganho: %.2lf\n", (((sal*1.15) - sal)));
		printf("Em percentual: 15 %\n");
	}

	if ((sal>400) && (sal<=800)) {
		printf("Novo salario: %.2lf\n", (sal*1.12));
		printf("Reajuste ganho: %.2lf\n", (((sal*1.12) - sal)));
		printf("Em percentual: 12 %\n");
	}

	if ((sal>800) && (sal<=1200)) {
		printf("Novo salario: %.2lf\n", (sal*1.1));
		printf("Reajuste ganho: %.2lf\n", (((sal*1.1) - sal)));
		printf("Em percentual: 10 %\n");
	}

	if ((sal>1200) && (sal<=2000)) {
		printf("Novo salario: %.2lf\n", (sal*1.07));
		printf("Reajuste ganho: %.2lf\n", (((sal*1.07) - sal)));
		printf("Em percentual: 7 %\n");
	}

	if (sal>2000) {
		printf("Novo salario: %.2lf\n", (sal*1.04));
		printf("Reajuste ganho: %.2lf\n", (((sal*1.04) - sal)));
		printf("Em percentual: 4 %\n");
	}

	return 0;
}
