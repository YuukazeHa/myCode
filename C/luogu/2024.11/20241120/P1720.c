#include <stdio.h>
#include <math.h>
int main(void)
{
  int n;
  scanf("%d", &n);
  double a = sqrt(5);
  double b = (1 + a) / 2, c = (1 - a) / 2;
  double x = 1, y = 1;
  for (int i = 1; i <= n; i++)
  {
    x *= b;
    y *= c;
  }
  double z = (x - y) / a;
  printf("%.2lf", z);
  return 0;
}