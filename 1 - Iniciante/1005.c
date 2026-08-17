/**
* Problema: 1005 - Media 1
* Link: https://judge.beecrowd.com/pt/problems/view/1005
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	double a, b;
	
	scanf("%lf%lf", &a, &b);
	
	a = a*3.5;
	b = b*7.5;
	
	a = ((a+b)/11);
	
	printf("MEDIA = %.5lf\n", a);
	
	return 0;
}
