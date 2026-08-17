/**
* Problema: 1178 - Preenchimento de Vetor III
* Link: https://judge.beecrowd.com/pt/problems/view/1178
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    double x, n[100];
    
    scanf("%lf", &x);
    
    for(int i=0; i<100; i++){
        
        if(i==0){
            
            n[0] = x;
        } else {
            
            n[i] = n[i-1]/2;
        }

        printf("N[%d] = %.4lf\n", i, n[i]);
    }

    return 0;
}
