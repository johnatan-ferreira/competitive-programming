/**
* Problema: 1174 - Seleçao em Vetor I
* Link: https://judge.beecrowd.com/pt/problems/view/1174
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    int cont=0, pos[100];
    double matriz_entrada[100], matriz_saida[100];
    
    for(int i=0; i<100; i++){
        
        scanf("%lf", &matriz_entrada[i]);
        
        if(matriz_entrada[i]<=10){
            
            matriz_saida[cont] = matriz_entrada[i];
            pos[cont]=i;
            cont++;
        }
    }
    
    for(int i=0; i<cont; i++){
        
        printf("A[%d] = %.1lf\n", pos[i], matriz_saida[i]);
    }

    return 0;
}
