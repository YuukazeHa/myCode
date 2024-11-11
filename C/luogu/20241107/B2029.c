#include <stdio.h>
int main(void)
{
  double h, r;
  scanf("%lf %lf", &h, &r);
  h /= 10;
  r /= 10;
  double s = r * r * 3.14;
  double v = s * h;
  double t = 20 / v;
  printf("%d", (int)t + 1);
  return 0;
}