/**
* Problema: 1016 - Distância
* Link: https://judge.beecrowd.com/pt/problems/view/1016
* Descrição: Leia a distância e calcule quanto tempo leva para o carro Y tomar essa distância do outro carro.
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    int d, y;
    
    scanf("%d", &d);
    
    y = 2.0*d;
    
    printf("%d minutos\n", y);
    
    return 0;
}
