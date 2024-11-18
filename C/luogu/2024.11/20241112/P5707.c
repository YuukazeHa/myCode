#include <stdio.h>
int main(void)
{
  int s, v;
  int min1 = 0;
  int h = 0;
  int min2 = 0;
  scanf("%d %d", &s, &v);
  if (s % v == 0)
  {
    min1 = s / v;
  }
  else
  {
    min1 = (int)(s / v) + 1;
  }
  min1 += 10;
  if (min1 >= 60)
  {
    h = min1 / 60;
    min2 = min1 % 60;
    if (h > 7)
    {
      printf("%02d:%02d", 24 - (h - 7), 60 - min2);
    }
    else
    {
      printf("%02d:%02d", (7 - h), 60 - min2);
    }
  }
  else
  {
    printf("07:%02d", 60 - min1);
  }
  return 0;
}