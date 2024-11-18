#include <stdio.h>
int main(void)
{
  double m, h;
  scanf("%lf %lf", &m, &h);
  double x = m / (h * h);
  if (x < 18.5)
    printf("Underweight");
  if (x >= 18.5 && x < 24)
    printf("Normal");
  if (x >= 24)
  {
    printf("%.4lf\nOverweight", x);
  }
  return 0;
}