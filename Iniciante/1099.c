/**
* Problema: 1099 - Soma de Ímpares Consecutivos II
* Link: https://judge.beecrowd.com/pt/problems/view/1099
* Linguagem: C
*/

#include <stdio.h>

int soma(int z) {

	int vet[z];

	for (int i=0; i<z; i++) {

		int x, y, soma=0;

		scanf("%d%d", &x, &y);

		if(y<x) {

			int temp = x;
			x = y;
			y = temp;
		}

		for(int j=(x+1); j<y; j++) {

			if((j%2)!=0) {

				soma = soma + j;
			}
		}

		vet[i] = soma;
		soma = 0;
	}

	for(int i=0; i<z; i++) {

		printf("%d\n", vet[i]);
	}

	return 0;
}

int main()
{
	int z;

	scanf("%d", &z);

	soma(z);

	return 0;
}
