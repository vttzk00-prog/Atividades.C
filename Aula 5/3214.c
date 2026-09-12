#include <stdio.h>

int main(void) {
    unsigned int E, F, C;

    for ( ; scanf("%u %u %u", &E, &F, &C) == 3 ; ) {
        unsigned int ga;
        unsigned int beb;
        ga = E + F;
        beb = 0;

        for (unsigned int trocas; ga >= C; ga = ga % C + trocas) {
            trocas = ga / C;
            beb += trocas;
        }

        printf("%u\n", beb);
    }
        return 0;
    }
