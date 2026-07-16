/**
* Problema: 1006 - Media 2
* Link: https://judge.beecrowd.com/pt/problems/view/1006
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	double a, b, c;
	
	scanf("%lf%lf%lf", &a, &b, &c);
	
	a = a*2;
	b = b*3;
	c = c*5;
	
	a = ((a+b+c)/10);
	
	printf("MEDIA = %.1lf\n", a);
	
	return 0;
}
