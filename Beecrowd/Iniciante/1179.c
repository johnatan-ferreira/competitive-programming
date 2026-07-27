/**
* Problema: 1179 - Preenchimento de Vetor IV
* Link: https://judge.beecrowd.com/pt/problems/view/1179
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    int par[5], impar[5], num, cont_par=0, cont_impar=0;
    
    for(int i=0; i<15; i++){
        
        scanf("%d", &num);
        
        if(num%2==0){
            
            par[cont_par]=num;
            cont_par++;
        } else {
            
            impar[cont_impar]=num;
            cont_impar++;
        }
        
        if(cont_par==5){
            
            for(int j=0; j<5; j++){
                
                printf("par[%d] = %d\n", j, par[j]);
            }
            
            cont_par=0;
        }
        
        if(cont_impar==5){
            
            for(int j=0; j<5; j++){
                
                printf("impar[%d] = %d\n", j, impar[j]);
            }
            
            cont_impar=0;
        }
    }
    
    for(int j=0; j<cont_impar; j++){
        
        printf("impar[%d] = %d\n", j, impar[j]);
    }
    
    for(int j=0; j<cont_par; j++){
        
        printf("par[%d] = %d\n", j, par[j]);
    }

    return 0;
}
