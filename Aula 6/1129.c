#include <stdio.h>

int main(){

    int n, marcador, pretos;
    int notas[5] = {255};
    
    
    
    while(scanf("%d",&n) == 1 && n != 0){
        
        for(int i=0;i < n ; i++){
             marcador = -1;
             pretos = 0;
       
        
        
        for(int j = 0; j < 5; j++){
             scanf("%d",&notas[j]);
            if(notas[j] <= 127){
                pretos++;
                marcador = j;
            }
        }
            
        if(pretos == 1){
            printf("%c\n", 'A' + marcador);
        }
        
        else {
            printf("*\n");
        }
        
        
        }
        
    }

    return 0;
}
