/**
* Problema: 2344 - Notas da Prova
* Link: https://judge.beecrowd.com/pt/problems/view/2344
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	int nota, x;

	while(1) {

		x = scanf("%d", &nota);
		
		if(x != 1) {
			while(getchar() != '\n');
			continue;
		} else {
		    
		    if (nota<0 || nota>100){
		        while(getchar() != '\n');
		        continue;
		    } else{
		        break;
		    }
		}
	}
	
	if (nota == 0){
	    printf("E\n");
	}
	
	if (nota>0 && nota<=35){
	    printf("D\n");
	}
	
	if (nota>35 && nota<=60){
	    printf("C\n");
	}
	
	if (nota >60 && nota <=85){
	    printf("B\n");
	}
	
	if (nota> 85 && nota<=100){
	    printf("A\n");
	}

	return 0;
}
