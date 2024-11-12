#include <stdio.h>
int main(void){
  int a, b;
  scanf("%d %d",&a,&b);
  b = a * 10 + b;
  int q = 19;
  printf("%d", (int)(b / q));
  return 0;
}