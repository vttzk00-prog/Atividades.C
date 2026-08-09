#include<stdio.h>
int main() {
    
    int N, x, y;

    scanf("%d", &N);

    while (N--) {
        scanf("%d %d", &x, &y);
            printf("%d cm2\n", (x * y) / 2);
    }

    return 0;
}
