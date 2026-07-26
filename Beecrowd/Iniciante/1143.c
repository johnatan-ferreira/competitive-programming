/**
* Problema: 1143 - Quadrado e ao Cubo
* Link: https://judge.beecrowd.com/pt/problems/view/1143
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	int x, y;
	
	scanf("%d", &x);
	
	for (y=1; y<=x; y++){
	    
	    printf("%d %d %d\n", y, (y*y), (y*y*y));
	}
	
	return 0;
}
