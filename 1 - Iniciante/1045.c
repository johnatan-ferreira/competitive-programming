/**
* Problema: 1045 - Tipos de Triângulos
* Link: https://judge.beecrowd.com/pt/problems/view/1045
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	double a, b, c, x, y, z;

	while(1) {

		int d = scanf("%lf%lf%lf", &a, &b, &c);

		if (d != 3) {
			while(getchar() != '\n');
			continue;
		} else {
			break;
		}
	}

	while(1){
	    
	    if((a>=b) && (b>=c)){
	        x = a;
	        y = b;
	        z = c;
	        break;
	    }
	    
	    if((a>=c) && (c>=b)){
	        x = a;
	        y = c;
	        z = b;
	        break;
	    }
	    
	    if((b>=a) && (a>=c)){
	        x = b;
	        y = a;
	        z = c;
	        break;
	    }
	    
	    if((b>=c) && (c>=a)){
	        x = b;
	        y = c;
	        z = a;
	        break;
	    }
	    
	    if((c>=a) && (a>=b)){
	        x = c;
	        y = a;
	        z = b;
	        break;
	    }
	    
	    if((c>=b) && (b>=a)){
	        x = c;
	        y = b;
	        z = a;
	        break;
	    }
	}
	
	a = x;
	b = y;
	c = z;
	
	if (a>=(b+c)){
	    printf("NAO FORMA TRIANGULO\n");
	    return 0;
	}
	
	if ((a*a) == (b*b)+(c*c)){
	    printf("TRIANGULO RETANGULO\n");
	}
	
	if ((a*a)>((b*b)+(c*c))){
	    printf("TRIANGULO OBTUSANGULO\n");
	}
	
	if ((a*a)<(b*b)+(c*c)){
	    printf("TRIANGULO ACUTANGULO\n");
	}
	
	if ((a==b) && (b==c)){
	    printf("TRIANGULO EQUILATERO\n");
	}
	
	if (((a==b) && (a!=c)) || ((a==c) && (a!=b)) || ((b==c) && (b!=a))){
	    printf("TRIANGULO ISOSCELES\n");
	}

	return 0;
}
