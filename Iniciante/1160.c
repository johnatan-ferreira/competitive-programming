/**
* Problema: 1160 - Crescimento Populacional
* Link: https://judge.beecrowd.com/pt/problems/view/1160
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	int pa, pb, x, i, j, cont=0;
	double g1, g2;

	while(scanf("%d", &x) != EOF) {

		for(i=0; i<x; i++) {

			scanf("%d%d%lf%lf", &pa, &pb, &g1, &g2);

			while((pa<pb) || (pa==pb)) {

				pa = pa * ((g1+100)/100);
				pb = pb * ((g2+100)/100);
				
				cont++;
				
				if (cont>100){
				    
				    pa = pb+1;
				}
			}

			if (cont>100) {

				printf("Mais de 1 seculo.\n");
			} else {

				printf("%d anos.\n", cont);
			}
			
			cont=0;
		}
	}

	return 0;
}