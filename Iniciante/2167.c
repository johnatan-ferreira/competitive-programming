/**
* Problema: 2167 - Falha do Motor
* Link: https://judge.beecrowd.com/pt/problems/view/2167
* Linguagem: C
*/

#include <stdio.h>

int teste(int n) {

	int temp = 0, x, cont=1, res=0;

	for(int i=0; i<n; i++) {

		scanf("%d", &x);

		if(res==0) {

			if(x<temp) {

				res=1;
			} else {

				temp = x;
				cont++;
			}
		}
	}

	if(res==0) {

		printf("0\n");
	} else {

		printf("%d\n", cont);
	}
	
	return 0;
}

int main()
{
	int n;

	scanf("%d", &n);

	teste(n);

	return 0;
}
