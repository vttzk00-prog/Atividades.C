#include <stdio.h>

int main(){
    int cabeca, ombro, joelho;
    joelho = 0;
    scanf("%d", &cabeca);
    
    for(int i = 0; i < 5; i++){
        scanf("%d", &ombro);
        
        if(cabeca == ombro){
            joelho++;
        }
    }
    
    printf("%d\n", joelho);
    
    return 0;
}
