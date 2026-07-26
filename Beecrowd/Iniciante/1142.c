/**
* Problema: 1142 - PUM
* Link: https://judge.beecrowd.com/pt/problems/view/1142
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	int x, i, j;
	int k=1;
	
	scanf("%d", &x);
	
	for (i=0; i<x; i++) {
	    
	    for (j=0; j<4; j++) {
	        
	        if (k%4==0) {
	            
	            printf("PUM\n");
	            k++;
	        } else {
	            
	            printf("%d ", k);
	            k++;
	        }
	    }
	}

	return 0;
}
