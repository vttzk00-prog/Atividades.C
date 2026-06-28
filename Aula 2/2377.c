#include <stdio.h>

int main()
{
  int ga, gb, pa, pb, w, x, y, z;
  scanf("%d%d\n", &ga, &gb);
  scanf("%d%d", &pa, &pb);
  w = ga/gb;
  x = ga*pa;
  y = w*pb;
  z = x+y;
  
  printf("%d\n", z);
  
   
    return 0;
}
