/**
* Problema: 1176 - Fibonacci em Vetor
* Link: https://judge.beecrowd.com/pt/problems/view/1176
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    unsigned long long int fib[61];
    int x;
    
    fib[0] = 0;
    fib[1] = 1;
    
    for(int i=2; i<61; i++){
        
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    scanf("%d", &x);
    
    int n[x];
    
    for(int i=0; i<x; i++){
        
        scanf("%d", &n[i]);
    }
    
    for(int i=0; i<x; i++){
        
        printf("Fib(%d) = %llu\n", n[i], fib[n[i]]);
    }

    return 0;
}
