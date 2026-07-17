/**
* Problema: 1043 - Triângulo
* Link: https://judge.beecrowd.com/pt/problems/view/1043
* Descrição: Ler 3 valores e dizer se é um triângulo. Se sim, informar a área. Se não, informar o perímetro do trapézio que possuem A e B como bases e C como altura.
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	double a, b, c, x;

	while(1) {

		x = scanf("%lf%lf%lf", &a, &b, &c);

		if (x != 3) {
			while(getchar() != '\n');
			continue;
		} else {
			break;
		}
	}

	if (((a+b)>c) && ((a+c)>b) && ((b+c)>a)) {

		printf("Perimetro = %.1lf\n", (a+b+c));
	} else {

		printf("Area = %.1lf\n", ((c*(a+b))/2));
	}

	return 0;
}
