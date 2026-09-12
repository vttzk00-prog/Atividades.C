#include <stdio.h>

int main(){
    
    int l, c, cu, priquit;
    scanf("%d%d", &l, &c);
    
    cu = l%2;
    priquit = c%2;
    
    if(cu == 1 && priquit == 1){
          printf("1\n");
          }
    
    else if(cu == 0 && priquit == 0){
         printf("1\n");
         }
         
    else if(cu == 1 && priquit == 0){
         printf("0\n");
         }
         
    else if(cu == 0 && priquit == 1){
         printf("0\n");
         }
         

    return 0;    
    }
