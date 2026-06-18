#include <stdio.h>
 
int main() {
 
    int a,b; 
    double c,d;

    scanf("%d %d %lf",&a,&b,&c); 

    d=b*c;

    printf("NUMBER = %d\n",a);
    printf("SALARY = U$ %.2lf\n",d);

 
    return 0;
