/**
* Problema: 2780 - Basquete de Robôs
* Link: https://judge.beecrowd.com/pt/problems/view/2780
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	int d, x, y;
	
	while(1){
	    
	    x = scanf("%d", &d);
	    
	    if ((x != 1) || (d<0 || d>2000)){
	        while(getchar() != '\n');
	        continue;
	    } else {
	        break;
	    }
	}
	
	if (d>= 0 && d<= 800){
	    y = 1;
	}
	
	if (d>800 && d<=1400){
	    y = 2;
	}
	
	if (d>1400 && d<=2000){
	    y = 3;
	}
	
	printf("%d\n", y);
	
	return 0;
}
