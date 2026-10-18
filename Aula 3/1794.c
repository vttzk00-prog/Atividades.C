#include <stdio.h>

int main (){
    
    int x, la, lb, na, nb;
    scanf("%d%d%d%d%d", &x, &la, &lb, &na, &nb);
    
    if(x >= la && x <= lb && x >= na && x <= nb){
        printf("possivel\n");
    }
    else {
        printf("impossivel\n");
    }
   
    
    return 0;
}
