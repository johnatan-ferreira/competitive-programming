/**
* Problema: 2163 - O Despertar da Força
* Link: https://judge.beecrowd.com/pt/problems/view/2163
* Linguagem: C
*/

#include <stdio.h>

void matriz(int x, int y) {

	int mat[x][y], cont=0, valor=0;

	for(int i=0; i<x; i++) {

		for(int j=0; j<y; j++) {

			scanf("%d", &mat[i][j]);
		}
	}

	for(int i=1; i<=(x-2); i++) {

		for(int j=1; j<=(y-2); j++) {

			if(mat[i][j]==42) {

				for(int a=(i-1); a<=(i+1); a++) {

					for(int b=(j-1); b<=(j+1); b++) {

						if(mat[a][b]==7) {

							cont++;
						}
					}
				}

				if(cont==8) {

					printf("%d %d\n", (i+1), (j+1));
					valor=1;
				} else {

					cont=0;
				}
			}
			
			if((i==(x-2)) && (j==(y-2)) && (valor==0)){
			    
			    printf("0 0\n");
			}
		}
	}
}

int main() {

	int x, y;

	scanf("%d%d", &x, &y);

	matriz(x, y);
	
	return 0;
}
