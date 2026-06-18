#include <stdio.h>

int main()
{
    int a, b, e, f;
    double c, d, total;
    
    scanf("%d%d%lf", &a, &b, &c);
    scanf("%d%d%lf", &e, &f, &d);
    
    total = (b*c)+(f*d);
    
    printf("VALOR A PAGAR: R$ %.2lf\n",total);

    return 0;
}
