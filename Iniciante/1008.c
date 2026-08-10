/**
* Problema: 1008 - Salário
* Link: https://judge.beecrowd.com/pt/problems/view/1008
* Linguagem: C
*/

#include <stdio.h>

int main() {

	int a;
	double b, c;

	scanf("%d%lf%lf", &a, &b, &c);

	b = b*c;
	
	printf("NUMBER = %d\n", a);
	printf("SALARY = U$ %.2lf\n", b);

	return 0;
}
