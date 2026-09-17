#include <stdio.h>

int main(){
    int n, g, i;
    double p, preco, menor;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%lf %d", &p, &g);
        preco = (p / g) * 1000.0;

        if(i == 0 || preco < menor){
            menor = preco;
        }
    }

    printf("%.2f\n", menor);

    return 0;
}
