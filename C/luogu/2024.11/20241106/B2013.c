#include <stdio.h>
int main(void){
  double F;
  scanf("%lf", &F);
  printf("%.5lf", 5 * (F - 32) / 9);
  return 0;
}