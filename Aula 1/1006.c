#include <stdio.h>
 
int main() {
    double a, b , c , x, y, z, media;
    scanf("%lf%lf%lf", &a,&b, &c);
    
    x = a*2;
    y = b*3;
    z = c*5;
    media = (x+y+z)/10;
    printf("MEDIA = %.1lf\n", media);

 
    return 0;
}
