/**
* Problema: 1065 - Pares entre Cinco Números
* Link: https://judge.beecrowd.com/pt/problems/view/1065
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    int x, y, cont=0;
    
    for (x=0; x<5; x++){
        
        scanf("%d", &y);
        
        if (y%2==0){
            
            cont++;
        }
    }
    
    printf("%d valores pares\n", cont);
    
    return 0;
}
