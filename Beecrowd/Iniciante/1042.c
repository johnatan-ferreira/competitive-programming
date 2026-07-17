/**
* Problema: 1042 - Sort Simples
* Link: https://judge.beecrowd.com/pt/problems/view/1042
* Descrição: Ler três valores e ordená-los em ordem crescente.
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	int a, b, c, d, x, y, z, a1, b1, c1;
	
	while(1){
	    
	    d = scanf("%d%d%d", &a, &b, &c);
	    
	    if (d != 3){
	        while(getchar() != '\n');
	        continue;
	    } else{
	        break;
	    }
	}
	
	a1 = a;
	b1 = b;
	c1 = c;
	
	while(1){
	    
	    if((a<=b) && (b<=c)){
	        x = a;
	        y = b;
	        z = c;
	        break;
	    }
	    
	    if((a<=c) && (c<=b)){
	        x = a;
	        y = c;
	        z = b;
	        break;
	    }
	    
	    if((b<=a) && (a<=c)){
	        x = b;
	        y = a;
	        z = c;
	        break;
	    }
	    
	    if((b<=c) && (c<=a)){
	        x = b;
	        y = c;
	        z = a;
	        break;
	    }
	    
	    if((c<=a) && (a<=b)){
	        x = c;
	        y = a;
	        z = b;
	        break;
	    }
	    
	    if((c<=b) && (b<=a)){
	        x = c;
	        y = b;
	        z = a;
	        break;
	    }
	}
	
	printf("%d\n%d\n%d\n\n", x, y, z);
	
	printf("%d\n%d\n%d\n", a1, b1, c1);

	return 0;
}
