/**
* Problema: 1051 - Imposto de Renda
* Link: https://judge.beecrowd.com/pt/problems/view/1051
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	double x;
	
	while(1){
	    
	    int y = scanf("%lf", &x);
	    
	    if ((y != 1) || (x<0)){
	        while(getchar() != '\n');
	        continue;
	    } else {
	        break;
	    }
	}
	
	if(x<2000){
	    printf("Isento\n");
	    return 0;
	}
	
	if ((x>2000) && (x<=3000)){
	    x = ((x - 2000)*0.08);
	    printf("R$ %.2lf\n", x);
	    return 0;
	}
	
	if ((x>3000) && (x<=4500)){
	    x = ((((x - 2000) - 999.99) * 0.18) + 999.99*0.08);
	    printf("R$ %.2lf\n", x);
	    return 0;
	}
	
	if (x>4500){
	    double x1 = (999.99 * 0.08);
	    double x2 = (1499.99 * 0.18);
	    double x3 = ((((x - 1499.99) - 999.99) - 2000) * 0.28);
	    printf("R$ %.2lf\n", x1+x2+x3);
	    return 0;
	}
}
