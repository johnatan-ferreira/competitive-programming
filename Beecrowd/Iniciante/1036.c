/**
* Problema: 1036 - Fórmula de Bhaskara
* Link: https://judge.beecrowd.com/pt/problems/view/1036
* Descrição: Dados A, B e C, calcular os valores de X usando a fórmula de Bhaskara
* Linguagem: C
*/

#include <stdio.h>
#include <math.h>

int main()
{
	double A, B, C, delta, R1, R2;
	int result;

	while(1) {

		result = scanf("%lf%lf%lf", &A, &B, &C);

		if (result != 3) {

			while (getchar() != '\n');
			continue;
		} else {
			break;
		}
	}

	delta = (B*B) - (4*A*C);

	R1 = ((B*-1) + (sqrt(delta)))/(2*A);
	R2 = ((B*-1) - (sqrt(delta)))/(2*A);

	if ((A==0 && delta<=0) || (A==0) || (delta<=0)) {
		printf("Impossivel calcular\n");
	} else {
		printf("R1 = %.5lf\n", R1);
		printf("R2 = %.5lf\n", R2);
	}



	return 0;
}
