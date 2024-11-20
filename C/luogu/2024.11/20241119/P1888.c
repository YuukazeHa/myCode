#include <stdio.h>

int gcd(int x, int y) // 辗转相除
{
  int z;
  while (x % y != 0)
  {
    z = x % y;
    x = y;
    y = z;
  }
  return z; // 返回最小公因数
}
int main(void)
{
  int num[3];
  for (int i = 0; i < 3; i++)
  {
    scanf("%d", &num[i]);
  }
  int max = num[0], min = num[0];
  for (int i = 0; i < 3; i++)
  {
    if (max < num[i])
    {
      max = num[i];
    }
  }
  for (int i = 0; i < 3; i++)
  {
    if (min > num[i])
    {
      min = num[i];
    }
  }
  int k = gcd(min, max);
  printf("%d/%d", min/k, max/k);
  return 0;
}