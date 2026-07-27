/**
* Problema: 1172 - Substituição em Vetor I
* Link: https://judge.beecrowd.com/pt/problems/view/1172
* Linguagem: C
*/

#include <stdio.h>

void imprimir(int x[]){

    for(int i=0; i<10; i++){

        printf("X[%d] = %d\n", i, x[i]);
    }
}

int main(){
    
    int x[10], y=1, *z=&y;

    for(int i=0; i<10; i++){

        scanf("%d", &x[i]);

        if(x[i]<=0){

            x[i] = *z;
        }

    }

    imprimir(x);

    return 0;
}
