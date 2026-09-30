#include <stdio.h>

int main(){
    
    int s, t, f, cu, x, y;
    scanf("%d%d%d", &s, &t, &f);
    x = (s+t+f);
    y = 24;
    
    if(x >= 0){
         cu = s+t+f;
         
         if(cu >= 0 && cu <= 24){
              printf("%d\n", cu);
              }
              else if(cu > 24){
                   cu = x - y;
                   printf("%d\n", cu);
                   }
                   }
                   
                   else if (x < 0){
                      cu = x + y;
                      printf("%d\n", cu);
                      }
      
    return 0;
    }
