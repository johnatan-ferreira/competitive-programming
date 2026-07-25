/**
* Problema: 1070 - Seis Números Ímpares
* Link: https://judge.beecrowd.com/pt/problems/view/1070
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    int x, cont=0;
    
    scanf("%d", &x);
    
    while(cont<=5){
        
        if (x%2!=0){
            
            printf("%d\n", x);
            cont++;
        }
        
        x++;
    }
    
    return 0;
}
