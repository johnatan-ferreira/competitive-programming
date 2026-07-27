/**
* Problema: 1145 - Sequência Lógica 2
* Link: https://judge.beecrowd.com/pt/problems/view/1145
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	int x, y, z;

	scanf("%d%d", &x, &y);

	for (z=1; z<=y; z++) {
		printf("%d", z);
		if((z%x==0) || (z==y)) {
			printf("\n");
		} else {
			printf(" ");
		}
	}

	return 0;
}
