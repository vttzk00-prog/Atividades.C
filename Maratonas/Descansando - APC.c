#include <stdio.h>

int main(){
    
    long long int x, y, ar, jo, aux, aux2; 
    scanf("%lld%lld", &x, &y);
    scanf("%lld%lld", &ar, &jo);
    
    if( x%y == 0){
        
        aux = y*x;
    }
    
    else {
        
        aux = x + y;
        
    }
    
    if(ar == aux){
        
        printf("artu\n");
        
    }
        
        else if( jo == aux){
            
            printf("joao\n");
            
        
    }
    
    else if (ar == jo || aux != ar && aux != jo) {
        
        printf("empate\n");
        
    }
    
    
    
    return 0;
}
