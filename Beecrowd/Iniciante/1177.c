/**
* Problema: 1177 - Preenchimento de Vetor II
* Link: https://judge.beecrowd.com/pt/problems/view/1177
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    int n[1000], t, i, cont=0;
    
    scanf("%d", &t);
    
    for(i=0; i<1000; i++){
        
        for(i; i+(t-1); i++){
            
            n[i] = cont;
            cont++;
            
            if(i==999){
                
                break;
            }
            
            if(cont==t){
                
                cont=0;
            }
        }
    }
    
    for(i=0; i<1000; i++){
        
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}
