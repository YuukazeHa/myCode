#include <stdio.h>
int main(void){
  double a,b,c;
  scanf("%lf %lf", &a,&b);
  c = a - (int)(a / b) * b;
  printf("%lf", c);
  return 0;
}