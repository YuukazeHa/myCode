#include <stdio.h>
// 输入格式
// 一行内输入一串整数，以0结束，以空格间隔。
// 输出格式
// 一行内倒着输出这一串整数，以空格间隔。
int main(void)
{
  int num;
  int number[100];
  int b = 0, i;
  if (num >= 0 && num <= 2 ^ 31 - 1)
  {
    while (num != 0)
    // 当num=0时 不再输入
    {
      scanf("%d", &num);
      number[b++] = num;
    }
    for (i = b - 1; i >= 0; i--)
    // 让数组以倒序输出
    {
      if (number[i] != 0)
      // 遍历数组输出
      {
        printf("%d", number[i]);
        if (i > 0)
        {
          printf(" ");
        }
      }
    }
  }
  return 0;
}