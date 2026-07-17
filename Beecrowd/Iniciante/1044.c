/**
* Problema: 1044 - Múltiplos
* Link: https://judge.beecrowd.com/pt/problems/view/1044
* Descrição: Dados dois números, dizer se eles são múltiplos ou não.
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	int a, b, x;

	while(1) {

		x = scanf("%d%d", &a, &b);

		if (x != 2) {
			while(getchar() != '\n');
			continue;
		}

		if (a<=b) {

			if(a == 0) {
				continue;
			} else {
				if ((b%a) == 0) {
					printf("Sao Multiplos\n");
				} else {
					printf("Nao sao Multiplos\n");
				}
			}
			break;
		}

		if (b<=a) {

			if (b == 0) {
				continue;
			} else {
				if ((a%b) == 0) {
					printf("Sao Multiplos\n");
				} else {
				    printf("Nao sao Multiplos\n");
				}	
			}
			break;
		}
	}

	return 0;
}
