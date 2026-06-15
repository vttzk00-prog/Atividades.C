#include <stdio.h>
 
int main() {
 
    int a, m, d, x, y;
  scanf("%d", &x);
  a = x/365;
  y = x%365;
  
  
  
  m = y/30;
  d = y%30;

  printf("%d ano(s)\n", a);
  printf("%d mes(es)\n", m);
  printf("%d dia(s)\n", d);
 
    return 0;
}
