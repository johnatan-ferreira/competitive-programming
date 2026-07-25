/**
* Problema: 1052 - Mês
* Link: https://judge.beecrowd.com/pt/problems/view/1052
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    int mes;
    
    while(1){
        int x = scanf("%d", &mes);
        
        if((x != 1) || (mes<1) || (mes>12)){
            while(getchar() != '\n');
            continue;
        } else {
            break;
        }
    }
    
    if (mes == 1){
        printf("January\n");
    }
    
    if (mes == 2){
        printf("February\n");
    }
    
    if (mes == 3){
        printf("March\n");
    }
    
    if (mes == 4){
        printf("April\n");
    }
    
    if (mes == 5){
        printf("May\n");
    }
    
    if (mes == 6){
        printf("June\n");
    }
    
    if (mes == 7){
        printf("July\n");
    }
    
    if (mes == 8){
        printf("August\n");
    }
    
    if (mes == 9){
        printf("September\n");
    }
    
    if (mes == 10){
        printf("October\n");
    }
    
    if (mes == 11){
        printf("November\n");
    }
    
    if (mes == 12){
        printf("December\n");
    }

    return 0;
}
