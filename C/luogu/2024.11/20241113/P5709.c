#include <stdio.h>
int main(void)
{
  int m, t, s;
  int num;
  scanf("%d %d %d", &m, &t, &s);
  if (t == 0)
  {
    printf("0");
    return 0;
  }
  if (s >= t * m)
  {
    printf("0");
  }
  else
  {
    if (s % t == 0)
    {
      num = s / t;
      printf("%d", m - num);
    }
    else
    {
      double k = s / t;
      num = (int)k + 1;
      printf("%d", m - num);
    }
  }
  return 0;
}