/**
* Problema: 1155 - Sequência S
* Link: https://judge.beecrowd.com/pt/problems/view/1155
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	double i, s=0;
	
	for (i=1; i<=100; i++){
	    
	    s = s + (1/i);
	}
	
	printf("%.2lf\n", s);

	return 0;
}
