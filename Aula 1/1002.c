#include <stdio.h>
 
int main() {
  double area, n, raio, raio2;
   
   n = 3.14159;
   
   scanf("%lf", &raio);
   
   raio2 = raio * raio;
   
   area = n * raio2;
   
   printf("A=%.4lf\n", area);
 
    return 0;
}
