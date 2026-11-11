#include <stdio.h> 

int main(){
    
    int n;
    scanf("%d", &n);
    
    long long ini = 1;
    long long tot = 0;
    
    for(int i = 1; i <= n; i++){
        
    tot = tot + ini;
    ini = ini *2;
    
    }
    
    printf("%lld\n", tot);
    
    return 0;
}
