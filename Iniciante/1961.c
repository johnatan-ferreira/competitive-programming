/**
* Problema: 1961 - Pula Sapo
* Link: https://judge.beecrowd.com/pt/problems/view/1961
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    int pulo, qnt, i, res, cont=0;
    
    scanf("%d%d", &pulo, &qnt);
    
    if ((pulo>=1) && (pulo<=5) && (qnt>=2) && (qnt<=100)) {
        
        int cano[qnt];
        
        for (i=0; i<qnt; i++){
            
            scanf("%d", &cano[i]);
        }
        
        for (i=1; i<qnt; i++) {
            
            res = cano[i-1] - cano[i];
            
            if (res<0){
                
                res = res * -1;
            }
            
            if (res<=pulo) {
                    
                cont++;
            }
        }
        
        if (cont == qnt-1){
            
            printf("YOU WIN\n");
        } else {
            
            printf("GAME OVER\n");
        }
    }

    return 0;
}
