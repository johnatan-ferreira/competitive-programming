/**
* Problema: 1074 - Par ou Ímpar
* Link: https://judge.beecrowd.com/pt/problems/view/1074
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    int x, y, z;
    
    scanf("%d", &x);
    
    for (y=1; y<=x; y++){
        
        scanf("%d", &z);
        
        if (z==0){
            printf("NULL\n");
            continue;
        }
        
        if (z%2==0){
            if (z>0){
                printf("EVEN POSITIVE\n");
            } else {
                printf("EVEN NEGATIVE\n");
            }
        } else {
            if (z>0){
                printf("ODD POSITIVE\n");
            } else {
                printf("ODD NEGATIVE\n");
            }
        }
    }
    
    return 0;
}
