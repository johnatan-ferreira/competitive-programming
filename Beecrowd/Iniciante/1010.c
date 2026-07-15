/**
* Problema: 1010 - Cálculo Simples
* Link: https://judge.beecrowd.com/pt/problems/view/1010
* Linguagem: C
*/

#include <stdio.h>

int main() {

	int a, b, x, y;
	double c, z;
	
	scanf("%d%d%lf", &a, &b, &c);
	scanf("%d%d%lf", &x, &y, &z);
	
	c = c * b;
	
	z = z * y;
	
	printf("VALOR A PAGAR: R$ %.2lf\n", (c+z));
	
	return 0;
}
