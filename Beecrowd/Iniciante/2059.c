/**
* Problema: 2059 - Ímpar, Par ou Roubo
* Link: https://judge.beecrowd.com/pt/problems/view/2059
* Linguagem: C
*/

#include <stdio.h>

int jogo(int p, int j1, int j2, int r, int a) {

	int win = 2;

	if(r==0) {

		if(a==0) {

			if((j1+j2)%2==0) {

				if(p==1) {

					win = 1;
				}
			} else {

				if(p==0) {

					win = 1;
				}
			}

		} else {

			win = 1;
		}
	} else {

		if(a==0) {

			win = 1;
		}
	}

	printf("Jogador %d ganha!\n", win);
	
	return 0;
}

int main()
{
	int p, j1, j2, r, a;

	scanf("%d%d%d%d%d", &p, &j1, &j2, &r, &a);

	jogo(p, j1, j2, r, a);

	return 0;
}
