/**
* Problema: 1077 - Sequencia IJ 3
* Link: https://judge.beecrowd.com/pt/problems/view/1077
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	int i, j=7, k, l=7;
	
	for (i=1; i<=9; i=i+2){
	    
	    j=l;
	    k=j-2;
	    
	    for (j=l; j>=k; j--){
	        
	        printf("I=%d J=%d\n", i, j);
	    }
	    
	    l = l+2;
	}
	
	return 0;
}
