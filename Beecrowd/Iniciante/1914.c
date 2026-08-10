/**
* Problema: 1914 - De Quem é a Vez?
* Link: https://judge.beecrowd.com/pt/problems/view/1914
* Linguagem: C
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int n, i, v1, v2;
	char n1[100], n2[100], e1[6], e2[6];

	scanf("%d", &n);

	if ((n>=1) && (n<=100)) {

		for (i=0; i<n; i++) {

			scanf("%s%s%s%s", n1, e1, n2, e2);

			scanf("%d%d", &v1, &v2);

			if ((v1>=1) && (v1<=(pow(10, 9))) && (v2>=1) && (v2<=(pow(10, 9)))) {

				v1 = ((v1+v2)%2);

				if (v1==0) {

					if (strcmp(e1, "PAR") == 0) {

						printf("%s\n", n1);
					} else {

						printf("%s\n", n2);
					}
				} else {

					if (strcmp(e1, "IMPAR") == 0) {

						printf("%s\n", n1);
					} else {

						printf("%s\n", n2);
					}
				}
			}
		}
	}

	return 0;
}
