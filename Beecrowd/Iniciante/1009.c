/**
* Problema: 1009 - Salário com Bônus
* Link: https://judge.beecrowd.com/pt/problems/view/1009
* Linguagem: C
*/

#include <stdio.h>

int main() {

	char x[9];
	double y, z;
	
	scanf("%s%lf%lf", x, &y, &z);
	
	y = y + (z * 0.15);
	
	printf("TOTAL = R$ %.2lf\n", y);
	
	return 0;
}
