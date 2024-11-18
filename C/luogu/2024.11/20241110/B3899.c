#include <stdio.h>
int main(void)
{
  int n, k, M;
  int count = 0;
  scanf("%d %d %d", &n, &k, &M);
  int number1[n];
  // 入库
  int number2[n];
  // 出库
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &number1[i]);
  }
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &number2[i]);
  }
  // 读取入库量和出库量

    for (int i = 0; i < n; i++)
  {
    int h = 0;
    int sum1 = 0, sum2 = 0;
    while (h < k)
    {
      sum1 += number1[h];
      sum2 += number2[h];
      h++;
    }
    if (sum1 - sum2 >= M)
    {
      printf("Yes");
      return 0;
    }
  }
  printf("No");
  return 0;
}
