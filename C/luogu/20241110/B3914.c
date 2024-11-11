#include <stdio.h>
int main(void)
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  int number[3] = {a, b, c};
  for (int i = 0; i < 3 - 1; i++)
  {
    for (int j = 0; j < 3 - i - 1; j++)
    {
      if (number[j] > number[j + 1])
      {
        int temp = number[j];
        number[j] = number[j + 1];
        number[j + 1] = temp;
      }
    }
  }
  a = number[0];
  b = number[1];
  c = number[2];
  // 排序后的数 a<b<c

    if (a + b < c)
  {
    printf("%d %d", c, a + b);
  }
  else if (a + b > c)
  {
    printf("%d %d", a + b, c);
  }
  return 0;
}