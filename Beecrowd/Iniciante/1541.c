/**
* Problema: 1541 - Construindo Casas
* Link: https://judge.beecrowd.com/pt/problems/view/1541
* Linguagem: C
*/

#include <stdio.h>
#include <math.h>

int main (){
    
    int a, b, porc, cont=0, lado;
    
    while (cont==0) {
        
        scanf("%d", &a);
        
        if (a==0) {
            
            cont = 1;
        } else {
            
            scanf("%d", &b);
            
            if (b==0) {
                
                cont = 1;
            } else {
                
                scanf("%d", &porc);
                
                if (porc==0) {
                    
                    cont = 1;
                } else {
                    
                    lado = sqrt(((a*b)*100)/porc);
                    printf("%d\n", lado);
                }
            }
        }
    }
    
    return 0;
}