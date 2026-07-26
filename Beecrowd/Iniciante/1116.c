/**
* Problema: 1116 - Dividindo X por Y
* Link: https://judge.beecrowd.com/pt/problems/view/1116
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	double x, y, a, b, c;
	
	scanf("%lf", &x);
	
	for (y=0; y<x; y++){
	    scanf("%lf%lf", &a, &b);
	    if (b==0){
	        printf("divisao impossivel\n");
	    } else {
	        c = a/b;
	        printf("%.1lf\n", c);   
	    }
	}
	return 0;
}
