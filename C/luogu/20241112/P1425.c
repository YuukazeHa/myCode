#include <stdio.h>
int main(void)
{
  int a, b, c, d;
  int min, min1, min2;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int h = c - a;
  if (d >= b)
  {
    min1 = d - b;
  }
  else
  {
    min1 = d + (60 - b);
    h--;
  }
  if (h < 0)
  {
    h = -h;
  }
  min2 = h * 60;
  min = min1 + min2;
  if (min >= 60)
  {
    printf("%d %d", min / 60, min % 60);
  }
  else
  {
    printf("0 %d", min);
  }
  return 0;
}