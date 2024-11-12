#include <stdio.h>
int main(void)
{
  double t;
  int n;
  scanf("%lf %d", &t, &n);
  int b = n * 2;
  printf("%.3lf\n%d", t / n, b);
  return 0;
}