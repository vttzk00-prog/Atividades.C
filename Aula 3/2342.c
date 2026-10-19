#include <stdio.h>

int main(){
    int n,p;
    char cu;
    int q;
    
    scanf("%d%d",&n,&p);
    scanf(" %c",&cu);
    scanf("%d",&q);
    
    if(cu == 43){
        if(n >= p+q){
            printf("OK\n");
        }
        else {
            printf("OVERFLOW\n");
        }
    }
    else if(cu == 42){
        if(n >= p*q){
            printf("OK\n");
        }
        else {
            printf("OVERFLOW\n");
        }
    }
    

    return 0;
}
