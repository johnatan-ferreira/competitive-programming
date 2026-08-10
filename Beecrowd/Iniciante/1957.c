/**
* Problema: 1957 - Converter para Hexadecimal
* Link: https://judge.beecrowd.com/pt/problems/view/1957
* Linguagem: C
*/

#include <stdio.h>

void converter(int x){

    int num[8], y[8];

    for(int i=0; i<8; i++){

        if(i>0){

            num[i] = num[i-1]/16;
        } else {

            num[i] = 268435456;
        }

        y[i] = 0;
    }

    for(int i=0; i<8; i++){

        if(x>=(num[i])){

            y[i] = x/num[i];
            
            x = x - (y[i]*num[i]);
        }
    }

    for(int i=0; i<8; i++){

        if(y[i]!=0){

            for(int z=i; z<8; z++){

                if(y[z]>9){

                    if(y[z]==10){

                        printf("A");
                    } else if(y[z]==11){

                        printf("B");
                    } else if(y[z]==12){

                        printf("C");
                    } else if(y[z]==13){

                        printf("D");
                    } else if(y[z]==14){

                        printf("E");
                    } else if(y[z]==15){

                        printf("F");
                    }
                } else {

                    printf("%d", y[z]);
                }
                
                if(z==7){

                    printf("\n");
                }
            }
            break;
        }
    }

}

int main(){

    int x;

    scanf("%d", &x);

    converter(x);
    
    return 0;
}
