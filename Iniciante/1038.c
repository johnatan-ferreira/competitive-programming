/**
* Problema: 1038 - Lanche
* Link: https://judge.beecrowd.com/pt/problems/view/1038
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    int cod, qnt, result;
    double f;
    
    while(1){
        
        result = scanf("%d%d", &cod, &qnt);
        
        if (result != 2){
            
            while(getchar() != '\n');
            continue;
        } else{
            break;
        }
    }
    
    if (cod == 1){
        
        f = qnt*4.0;
        printf("Total: R$ %.2lf\n", f);
    }
    
    if (cod == 2){
        
        f = qnt*4.5;
        printf("Total: R$ %.2lf\n", f);
    }
    
    if (cod == 3){
        
        f = qnt*5.0;
        printf("Total: R$ %.2lf\n", f);
    }
    
    if (cod == 4){
        
        f = qnt*2.0;
        printf("Total: R$ %.2lf\n", f);
    }
    
    if (cod == 5){
        
        f = qnt*1.5;
        printf("Total: R$ %.2lf\n", f);
    }

    return 0;
}
