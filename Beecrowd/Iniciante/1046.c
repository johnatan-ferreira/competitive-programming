/**
* Problema: 1046 - Tempo de Jogo
* Link: https://judge.beecrowd.com/pt/problems/view/1046
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	int a, b, x;

	while(1) {

		x = scanf("%d%d", &a, &b);

		if(x != 2) {
			while(getchar() != '\n');
			continue;
		} else {
			break;
		}
	}

	if (a>b) {
		printf("O JOGO DUROU %d HORA(S)\n", ((24 - a) + b));
	}

	if (b>a) {
		printf("O JOGO DUROU %d HORA(S)\n", (b-a));
	}

	if (a==b) {
		printf("O JOGO DUROU 24 HORA(S)\n");
	}

	return 0;
}
