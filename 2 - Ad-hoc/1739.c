#include <stdio.h>

int main()
{
	long int a, b, c;
	int z, cont=0, y;
	char num[1000];

	a = 1;
	b = 1;
	c=a+b;

	while(scanf("%d", &z) != EOF) {

		for (int i=2; i>1; i++) {

			a = b;
			b = c;
			c = a+b;

			if ((c%3==0)) {

				cont++;
			} else {

				sprintf(num, "%li", c);

				for(y=0; num[y]!='\0'; y++) {

					if (num[y]=='3') {

						cont++;
						y=1000;
					}
				}
			}

			if(cont==z) {

				printf("%li\n", c);
				
				i=0;
				cont=0;
				a=1;
				b=1;
				c=a+b;
			}
		}
	}

	return 0;
}
