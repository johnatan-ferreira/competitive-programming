/**
* Problema: 1060 - Números positivos
* Link: https://judge.beecrowd.com/pt/problems/view/1060
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    int x, cont=0;
    double y;
    
    for (x=0; x<6; x++){
        
        scanf("%lf", &y);
        
        if (y>0){
            
            cont++;
        }
    }
    
    printf("%d valores positivos\n", cont);
    
    return 0;
}
