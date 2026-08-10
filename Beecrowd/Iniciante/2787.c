/**
* Problema: 2787 - Xadrez
* Link: https://judge.beecrowd.com/pt/problems/view/2787
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	int l, c, x;

	while(1) {

		x = scanf("%d%d", &l, &c);

		if (x != 2) {

			while(getchar() != '\n');
			continue;
		} else {

			if ((l<1) || (l>1000) || (c<1) || (c>1000)) {
				while(getchar() != '\n');
				continue;
			}

			break;
		}
	}

	if (((l%2) != 0) && ((c%2) != 0)) {
		printf("1\n");
	}

	if (((l%2) != 0) && ((c%2) == 0)) {
		printf("0\n");
	}

	if (((l%2) == 0) && ((c%2) != 0)) {
		printf("0\n");
	}

	if (((l%2) == 0) && ((c%2) == 0)) {
		printf("1\n");
	}

	return 0;
}
