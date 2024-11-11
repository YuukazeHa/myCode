#include <stdio.h>
#include <math.h>
int main(void)
{
  int x, n;
  scanf("%d %d", &x, &n);
  double a = 0.001;
  double k;
  k = x * pow(1 + a, n);
  printf("%.4lf", k);
  return 0;
}