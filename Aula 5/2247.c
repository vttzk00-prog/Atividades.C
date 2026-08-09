#include <stdio.h>

int main() {
    int n, teste = 1;
    while (scanf("%d", &n) == 1 && n != 0) {
        printf("Teste %d\n", teste++);
        long long cum = 0;
        for (int i = 0; i < n; i++) {
            int j, z;
            scanf("%d %d", &j, &z);
            cum += (j - z);
            printf("%lld\n", cum);
        }
        printf("\n");
    }
    return 0;
}
//irei admitir aq que usei IA, e mesmo com a explicacao da IA eu nao consegui entender nada, desisto da programacao >=[
