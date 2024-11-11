#include <stdio.h>
int main(void)
{
  int n;
  scanf("%d", &n);
  int number[n];
  int i = 0;
  while (i < n)
  {
    scanf("%d", &number[i]);
    i++;
  }
  // 循环数组赋值
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (number[j] > number[j + 1])
      {
        int t = number[j];
        number[j] = number[j + 1];
        number[j + 1] = t;
        // 交换相邻数
      }
    }
    // 冒泡排序
  }
  printf("%d", number[0]);
  return 0;
}