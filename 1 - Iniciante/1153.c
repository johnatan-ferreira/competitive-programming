/**
* Problema: 1153 - Fatorial Simples
* Link: https://judge.beecrowd.com/pt/problems/view/1153
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    int x, i, y=1;
    
    scanf("%d", &x);
    
    for (i=1; i<=x; i++){
        
        y = y * i;
    }
    
    printf("%d\n", y);

    return 0;
}
