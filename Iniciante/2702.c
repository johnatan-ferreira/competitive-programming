/**
* Problema: 2702 - Escolha Difícil
* Link: https://judge.beecrowd.com/pt/problems/view/2702
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	int ca, ba, pa, cr, br, pr, r1, r2, x=0;


	while(1) {

		r1 = scanf("%d%d%d", &ca, &ba, &pa);
		r2 = scanf("%d%d%d", &cr, &br, &pr);

		if ((r1 != 3) || (r2 != 3) || (ca<0) || (ca>100) || (ba<0) || (ba>100) || (pa<0) || (pa>100) || (cr<0) || (cr>100) || (br<0) || (br>100) || (pr<0) || (pr>100)) {
			while(getchar() != '\n');
			continue;
		} else {
			break;
		}
	}

	ca = ca - cr;
	ba = ba - br;
	pa = pa - pr;

	if (ca<0) {
		x = x + ca;
	}

	if (ba<0) {
		x = x + ba;
	}

	if (pa<0) {
		x = x + pa;
	}
	
	printf("%d\n", (x*-1));

	return 0;
}
