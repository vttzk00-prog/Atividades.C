#include <stdio.h>

int main()
{
   double pn, pa, pb, x, y;
   pn = 100.00;
   
   scanf ("%lf%lf", &pa, &pb);
   x = pn * ((pa/100.00)+1);
   y = x * ((pb/100.00)+1);
   
   printf("%.6lf\n", y-100);
   
    return 0;
}
