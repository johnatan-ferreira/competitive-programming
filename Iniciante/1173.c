/**
* Problema: 1173 - Preenchimento de Vetor I
* Link: https://judge.beecrowd.com/pt/problems/view/1173
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    int valor, matriz[10];
    
    scanf("%d", &valor);
    
    matriz[0] = valor;
    
    for(int i=1; i<10; i++){
        
        matriz[i] = matriz[i-1] * 2;
    }
    
    for(int i=0; i<10; i++){
        
        printf("N[%d] = %d\n", i, matriz[i]);
    }

    return 0;
}
