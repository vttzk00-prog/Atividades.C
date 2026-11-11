#include <stdio.h>

int main(){
    
    int n;
    long long cu;
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        scanf("%lld", &cu);
        
        printf("%lld\n", cu * i);
        
        if(i < n){
            printf(" ");
        }
    }
    
    printf("\n");
    
    
    return 0;
}
