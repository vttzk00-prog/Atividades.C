#include <stdio.h>

int main()
{
  int a, b, c;
  int x, y, z, ext;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  
  x=a;
  y=b;
  z=c;
  
  if(a > b){
      ext=a;
      a=b;
      b=ext;
      
  }
  
  if(a > c){
      ext=a;
      a=c;
      c=ext;
  }
  
  if(b > c){
      ext=b;
      b=c;
      c=ext;
  }
  
  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);
  printf("\n");
  printf("%d\n", x);
  printf("%d\n", y);
  printf("%d\n", z);
  
  

    return 0;
} 
