/**
* Problema: 1011 - Esfera
* Link: https://judge.beecrowd.com/pt/problems/view/1011
* Linguagem: C
*/

#include <stdio.h>

int main() {

	double x;
	
	scanf("%lf", &x);
	
	x = ((4.0/3.0) * 3.14159 * (x*x*x));
	
	printf("VOLUME = %.3lf\n", x);
	
	return 0;
}
