#include <stdio.h>

int count = 0;
long long number[101];
long long sum = 0;
int main(void)
{
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    int h = i;
    int k = 0;
    while (h > 0)
    {
      if (h % 10 == 7)
      {
        k = 1;
        break;
      }
      h /= 10;
    }
    if (i % 7 == 0 || k)
    {
      continue;
    }
    sum += (long long)i * i;
  }
  printf("%lld", sum);
  return 0;
}