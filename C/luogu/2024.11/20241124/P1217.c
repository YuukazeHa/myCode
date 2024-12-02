#include <stdio.h>

// 不会写TT

int ss(int a, int num)
{
  int i;
  for (i = a; i * i <= num; i++)
  {
    if (num % i == 0)
    {
      return 0;
    }
  }
  return i;
}
// 判断素数

int hw(int num)
{
  int number[1000];
  int c = 0;
  while (num > 0)
  {
    int k = num % 10;
    number[c++] = k;
    num /= 10;
  }
  // 写入数组

  int d = 0, f = c - 1;
  for (;;)
  {
    int e = 0;
    if (number[d++] == number[f--])
    {
      if (d = f)
      {
        break;
      }
    }
  }
  // ？

  return num;
}
// 判断回文

int main(void)
{
  int a, b;
  scanf("%d %d", &a, &b);
  // a 起始 b 结束

  int number;
  // 回文数

  for (int i = a; i <= b; i++)
  {
    number = hw(ss(a, i));
    printf("%d\n", number);
  }
  return 0;
}