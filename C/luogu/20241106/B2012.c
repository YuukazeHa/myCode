#include <stdio.h>
int main(void){
  double a,b;
  scanf("%lf", &a);
  scanf("%lf", &b);
  printf("%.3lf%%", (b/a)*100);
  return 0;
}