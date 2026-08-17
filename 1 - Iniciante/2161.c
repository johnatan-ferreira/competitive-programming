/**
* Problema: 2161 - Raiz Quadrada de 10
* Link: https://judge.beecrowd.com/pt/problems/view/2161
* Linguagem: C
*/

#include <stdio.h>

int raiz(int z) {

	if((z>-1) && (z<=100)) {

		double vet[z];

		vet[0] = 1.0/6.0;

		if(z>1) {

			for(int i=1; i<z; i++) {

				vet[i] = (1.0/(6+vet[i-1]));
			}
			
			printf("%.10lf\n", 3+vet[z-1]);
			
		} else {
		    
		    printf("%.10lf\n", 3+vet[z-1]);
		}

	}
	
	return 0;
}

int main()
{
	int z;

	scanf("%d", &z);

	raiz(z);

	return 0;
}
