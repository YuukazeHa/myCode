#include <stdio.h>
int ss(int num)
{
  for (int i = 2; i * i <= num; i++)
  {
    if (num % i == 0)
    // 当num不止1和本身能整除时，返回0
    {
      return 0;
    }
  }
  return 1;
  // 如果是素数 返回1
}

// 计算素数

int xfs(int num)
{
  int reversed = 0;
  while (num != 0)
  {
    int digit = num % 10;             // 获取最后一位数字
    reversed = reversed * 10 + digit; // 将数字添加到反转结果的末尾
    num /= 10;                        // 移除最后一位数字
  }
  // 反转数字

  return reversed;
}
int main(void)
{
  int m, n;
  int j = 0;
  int number[10000];
  scanf("%d %d", &m, &n);
  for (int i = m; i <= n; i++)
  {
    if (ss(i) && ss(xfs(i)))
    // 当i是素数 且 相反数也是素数时
    {
      number[j++] = i;
      // 储存该素数
    }
  }
  if (j == 0)
  // 没有素数时 输出No
  {
    printf("No\n");
  }
  for (int i = 0; i < j; i++)
  {
    printf("%d", number[i]);
    // 遍历数组
    if (i < j - 1)
    {
      printf(",");
      // 输出的每个数字后面加上逗号
    }
  }
  printf("\n");
  return 0;
}
