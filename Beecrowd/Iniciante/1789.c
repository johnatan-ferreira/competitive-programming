/**
* Problema: 1789 - A Corrida de Lesmas
* Link: https://judge.beecrowd.com/pt/problems/view/1789
* Linguagem: C
*/

#include <stdio.h>

int jogo(int l) {
    
    int temp = 0, nivel, x;
    
    for(int i=0; i<l; i++){
        
        scanf("%d", &x);
        
        if(x>temp){
            
            temp=x;
        }
        
    }
    
    if(temp<10){
        
        nivel = 1;
    } else if((temp>=10) && (temp<20)){
        
        nivel = 2;
    } else if(temp>=20){
        
        nivel = 3;
    }
    
    printf("%d\n", nivel);
    
    return 0;
    
}

int main()
{
    int l;
    
    while(scanf("%d", &l)!=EOF){
        
        jogo(l);
    }

	return 0;
}
