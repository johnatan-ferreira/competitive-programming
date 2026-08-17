/**
* Problema: 1072 - Intervalo 2
* Link: https://judge.beecrowd.com/pt/problems/view/1072
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	int n, i, x, in=0, out=0;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
	    scanf("%d", &x);
	    if ((x>=10) && (x<=20)){
	        in++;
	    } else {
	        out++;
	    }
	}
	
	printf("%d in\n", in);
	printf("%d out\n", out);

	return 0;
}
