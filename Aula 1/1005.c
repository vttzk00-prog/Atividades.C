#include <stdio.h>
 
int main() {
    double a,b, x, y, media;
    scanf("%lf%lf", &a,&b);
    
    x = a*3.5;
    y = b*7.5;
    media = (x+y)/11;
    printf("MEDIA = %.5lf\n", media);

 
    return 0;
}
