#include <stdio.h>

int main()
{
	int n, i, j, pos=0;

	for (i=1; i>0; i++) {

		scanf("%d", &n);

		if (n != 0) {

			char c[n];

			scanf("%s", c);

			for (j=0; j<n; j++) {

				if (c[j] == 'E') {

					pos = pos - 90;
				}

				if (c[j] == 'D') {

					pos = pos + 90;
				}

				if ((pos == 360) || (pos == -360)) {

					pos = 0;
				}
			}

			if (pos == 0) {

				printf("N\n");
			}

			if ((pos == -90) || (pos == 270)) {

				printf("O\n");
			}

			if ((pos == -180) || (pos == 180)) {

				printf("S\n");
			}

			if ((pos == 90) || (pos == -270)) {

				printf("L\n");
			}

			pos = 0;
		} else {
		    i = -1;
		}
	}

	return 0;
}
