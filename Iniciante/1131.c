/**
* Problema: 1131 - Grenais
* Link: https://judge.beecrowd.com/pt/problems/view/1131
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    int gol_inter, gol_gremio, i, x, grenais=0, inter=0, gremio=0, empate=0;
    
    for (i=1; i>0; i++){
        
        scanf("%d%d", &gol_inter, &gol_gremio);
        
        grenais++;
        
        if (gol_inter>gol_gremio){
            
            inter++;
        }
        
        if (gol_gremio>gol_inter){
            
            gremio++;
        }
        
        if (gol_inter==gol_gremio){
            
            empate++;
        }
        
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &x);
        
        if (x==2){
            
            i = -1;
        }
    }
    
    printf("%d grenais\n", grenais);
    
    printf("Inter:%d\n", inter);
    
    printf("Gremio:%d\n", gremio);
    
    printf("Empates:%d\n", empate);
    
    if (inter>gremio){
            
            printf("Inter venceu mais\n");
    }
    
    if (gremio>inter){
        
        printf("Gremio venceu mais\n");
    }
    
    if (inter==gremio){
        
        printf("Nao houve vencedor\n");
    }
    
    return 0;
}
