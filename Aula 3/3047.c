#include <stdio.h>

int main() {
    int m, a, b, c, maior;

    scanf("%d", &m);
    scanf("%d", &a);
    scanf("%d", &b);

    c = m - a - b;

    maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;

    printf("%d\n", maior);

    return 0;
}
