/**
* Problema: 2582 - System of a Download
* Link: https://judge.beecrowd.com/pt/problems/view/2582
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	int n, i, a, b;

	scanf("%d", &n);

	for (i=0; i<n; i++) {

		scanf("%d%d", &a, &b);

		if ((a>=0) && (a<=5) && (b>=0) && (b<=5)) {

			a = a+b;

			if (a==0) {

				printf("PROXYCITY\n");
			}

			if (a==1) {

				printf("P.Y.N.G.\n");
			}

			if (a==2) {

				printf("DNSUEY!\n");
			}

			if (a==3) {

				printf("SERVERS\n");
			}

			if (a==4) {

				printf("HOST!\n");
			}

			if (a==5) {

				printf("CRIPTONIZE\n");
			}

			if (a==6) {

				printf("OFFLINE DAY\n");
			}

			if (a==7) {

				printf("SALT\n");
			}

			if (a==8) {

				printf("ANSWER!\n");
			}

			if (a==9) {

				printf("RAR?\n");
			}

			if (a==10) {

				printf("WIFI ANTENNAS\n");
			}
		}
	}

	return 0;
}
