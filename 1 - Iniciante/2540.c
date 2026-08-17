/**
* Problema: 2540 - Impeachment do Líder
* Link: https://judge.beecrowd.com/pt/problems/view/2540
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	int i, j;
	double x, cont=0;
	
	while(scanf("%lf", &x) != EOF){
	    
	    for (i=0; i<x; i++){
	        
	        scanf("%d", &j);
	        
	        if (j==1){
	            
	            cont++;
	        }
	    }
	    
	    if (cont>=((x*2)/3)){
	        
	        printf("impeachment\n");
	    } else {
	        
	        printf("acusacao arquivada\n");
	    }
	    cont = 0;
	}

	return 0;
}
