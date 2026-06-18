#include <stdio.h>
 
int main(){
    double a,b,total, x,y;
    char nome[50];
  
    scanf("%49s", &nome);
    scanf("%lf%lf",&a,&b);
  
    total = (b*0.15)+a;
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}
