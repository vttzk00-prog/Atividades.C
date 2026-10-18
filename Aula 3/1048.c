#include <stdio.h>

int main (){
    float x, aux, aux2;
    int cu;
    scanf("%f", &x);
    
    if(x <= 400){
        cu = 15;
    }
    else if(x <= 800){
        cu = 12;
    }
    else if(x <= 1200){
        cu = 10;
    }
    else if(x <= 2000){
        cu = 7;
    }
    else if(x > 2000){
        cu = 4;
    }
    
    aux = x * cu/100;
    aux2 = x + aux;
    
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n", aux2, aux, cu );
    
    
    return 0;
}
