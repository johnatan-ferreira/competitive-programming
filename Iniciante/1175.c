/**
* Problema: 1175 - Troca em Vetor I
* Link: https://judge.beecrowd.com/pt/problems/view/1175
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    int n[20], x=0, y=19, temp;
    
    for(int i=0; i<20; i++){
        
        scanf("%d", &n[i]);
    }
    
    for(int i=0; i<10; i++){
        
        temp=n[x];
        n[x] = n[y];
        n[y] = temp;
        
        x++;
        y--;
    }
    
    for(int i=0; i<20; i++){
        
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}
