#include <stdio.h>
int main(void)
{
  char isbn[15];
  scanf("%s", isbn);
  int j = 1;
  int sum = 0;
  int b = 0;

  for (int i = 0; isbn[i] != '\0'; i++)
  {
    if (isbn[i] == '-')
    {
      b++;
      if (b == 3)
      {
        break;
      }
      continue;
    }
    sum += (isbn[i] - '0') * (j++);
  }
  // 求总和

  sum %= 11;

  
  if (sum == 10)
  {
    if (isbn[12] == 'X')
    {
      printf("Right");
    }
    else
    {
      for (int i = 0; i < 12; i++)
      {
        printf("%c", isbn[i]);
      }
      // 输出识别码前面的字符
      printf("X");
    }
    return 0;
  }
  else
  {
    if (isbn[12] - '0' == sum)
    {
      printf("Right");
    }
    else
    {
      for (int i = 0; i < 12; i++)
      {
        printf("%c", isbn[i]);
      }
      // 输出识别码前面的字符
      printf("%d", sum);
    }
  }
  return 0;
}