/**
* Problema: 1114 - Senha Fixa
* Link: https://judge.beecrowd.com/pt/problems/view/1114
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    int x, i;
    
    for (i=1; i>0; i++) {
        
        scanf("%d", &x);
        
        if (x == 2002) {
            
            printf("Acesso Permitido\n");
            i = -1;
        } else {
            
            printf("Senha Invalida\n");
        }
    }

    return 0;
}