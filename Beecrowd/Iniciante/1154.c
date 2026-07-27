/**
* Problema: 1154 - Idades
* Link: https://judge.beecrowd.com/pt/problems/view/1154
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    int i;
    double y=0;
    
    for (i=1; i>0; i++){
        
        int x[i];
        
        scanf("%d", &x[i-1]);
        
        if (x[i-1]<0){
            
            printf("%.2lf\n", (y/(i-1)));
            break;
        } else {
            
            y = y + x[i-1];
        }
    }

    return 0;
}
