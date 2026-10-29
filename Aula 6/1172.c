#include <stdio.h>

int main (){
    
    int cu[10];
    int i;
    
    for(i = 0; i < 10; i++){
        scanf("%d", &cu[i]);
        
        if(cu[i] <= 0){
           
           printf("X[%d] = 1\n", i);
        }
        
        else{
            printf("X[%d] = %d\n", i, cu[i]);
        }
    }
  
    
    
    return 0;
}
