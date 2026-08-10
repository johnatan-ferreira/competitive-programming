/**
* Problema: 2554 - Pizza Antes de BH
* Link: https://judge.beecrowd.com/pt/problems/view/2554
* Linguagem: C
*/

#include <stdio.h>
#include <string.h>

int main() {

	int p, d, k, cont=0, valor=0;
	char data[11], data_final[11];

	while(scanf("%d%d", &p, &d) != EOF) {

		for(int i=0; i<d; i++) {

			scanf("%s", data);
			
			for(int j=0; j<p; j++) {

				scanf("%d", &k);

				if(k==1) {

					cont++;
				}
			}

			if(valor==0) {

				if(cont==p) {

                    strcpy(data_final, data);
                    
                    valor=1;
				}
			}
			
			cont=0;
		}
		
		if(valor==0){
		    
		    printf("Pizza antes de FdI\n");
		} else {
		    
		    printf("%s\n", data_final);
		}
		
		valor=0;
	}
	
	return 0;
}
