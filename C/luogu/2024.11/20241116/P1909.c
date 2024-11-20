#include <stdio.h>
int main(void)
{
  int a1, a2;
  int b1, b2;
  int c1, c2;
  int n;
  int s1, s2, s3;
  int y1, y2, y3;
  scanf("%d", &n);
  scanf("%d %d %d %d %d %d", &a1, &a2, &b1, &b2, &c1, &c2);
  if (n % a1 == 0)
  {
    s1 = n / a1;
  }
  else
  {
    s1 = (int)(n / (double)a1) + 1;
  }
  y1 = s1 * a2;

  if (n % b1 == 0)
  {
    s2 = n / b1;
  }
  else
  {
    s2 = (int)(n / (double)b1) + 1;
  }
  y2 = s2 * b2;

  if (n % c1 == 0)
  {
    s3 = n / c1;
  }
  else
  {
    s3 = (int)(n / (double)c1) + 1;
  }
  y3 = s3 * c2;

  int number[3] = {y1, y2, y3};
  int min = number[0];
  for (int i = 1; i < 3; i++)
  {
    if (min > number[i])
    {
      min = number[i];
    }
  }
  printf("%d", min);
  return 0;
}