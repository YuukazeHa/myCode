#include <stdio.h>

int main(void)
{
  int number[12];
  for (int i = 0; i < 12; i++)
  {
    scanf("%d", &number[i]);
    // 输入预算
  }
  // 每个月+300
  // 减去预算 >=100 存100*n

  int yuan;
  // 每个月剩下的钱
  int sum = 0;
  // 存钱
  int s = 0;

  for (int i = 0; i < 12; i++)
  // 12个月
  {
    yuan = 300 + s - number[i];
    if (yuan < 0)
    {
      printf("-%d", i + 1);
      return 0;
    }
    if (yuan >= 100)
    {
      int n, k;
      k = yuan % 100;
      // 计算不足100的钱
      n = yuan - k;
      sum += n;
    }
    s = yuan % 100;
    // 存后剩下的钱
  }
  double lx = sum * 1.2;
  double z = (double)s + lx;
  printf("%.0lf", z);
  return 0;
}