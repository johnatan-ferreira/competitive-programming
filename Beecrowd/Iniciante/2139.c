/**
* Problema: 2139 - Natal de Pedrinho
* Link: https://judge.beecrowd.com/pt/problems/view/2139
* Linguagem: C
*/

#include <stdio.h>

int main () {

	int mes, dia, i, dias=0, cont=0;

	int meses[12];
	meses[0] = 31;
	meses[1] = 29;
	meses[2] = 31;
	meses[3] = 30;
	meses[4] = 31;
	meses[5] = 30;
	meses[6] = 31;
	meses[7] = 31;
	meses[8] = 30;
	meses[9] = 31;
	meses[10] = 30;
	meses[11] = 31;

	while (cont == 0) {

		if (scanf("%d%d", &mes, &dia) != EOF) {

			for (i=0; i<mes; i++) {

				dias = dias + meses[i];
			}

			dias = dias - (meses[mes-1] - dia);

			if (dias == 359) {

				printf("E vespera de natal!\n");
			} else if ((dias >360) && (dias <=366)) {

				printf("Ja passou!\n");
			} else if (dias == 360) {

				printf("E natal!\n");
			} else {

				dias = 360 - dias;
				printf("Faltam %d dias para o natal!\n", dias);
			}
			
			dias = 0;
		} else {
		    
		    cont = 1;
		}
	}

	return 0;
}
