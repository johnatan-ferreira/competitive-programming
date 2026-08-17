/**
* Problema: 1035 - Teste de Seleção 1
* Link: https://judge.beecrowd.com/pt/problems/view/1035
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	int A, B, C, D, result;

	while(1) {
		result = scanf("%d%d%d%d", &A, &B, &C, &D);

		if (result != 4) {
			while(getchar() != '\n');
			continue;
		} else {
			break;
		}
	}

	if ((B>C) && (D>A) && ((C+D)>(A+B)) && C>0 && D>0 && (A%2==0)) {
		printf("Valores aceitos\n");
	} else {
		printf("Valores nao aceitos\n");
	}

	return 0;
}
