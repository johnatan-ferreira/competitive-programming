/**
* Problema: 1075 - Resto 2
* Link: https://judge.beecrowd.com/pt/problems/view/1075
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    int x, y;
    
    scanf("%d", &x);
    
    for (y=1; y<=10000; y++){
        
        if (y%x==2){
            printf("%d\n", y);
        }
    }

    return 0;
}
