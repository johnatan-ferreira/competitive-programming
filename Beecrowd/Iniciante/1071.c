/**
* Problema: 1071 - Soma de Impares Consecutivos I
* Link: https://judge.beecrowd.com/pt/problems/view/1071
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    int x, y, z, soma=0;
    
    scanf("%d%d", &x, &y);
    
    if (x>y){
        
        z = x;
        x = y;
        y = z;
    }
    
    for(x=x+1; x<y; x++){
        
        if (x%2!=0){
            
            soma = soma + x;
        }
    }
    
    printf("%d\n", soma);
    
    return 0;
}
