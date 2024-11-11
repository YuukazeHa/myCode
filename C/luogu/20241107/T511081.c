#include <stdio.h>
int main(void)
{
  int a, b;
  scanf("%d %d", &a, &b);
  int count = 0;

  for (int k = a; k <= b; k++)
  {
    int i = k;
    while (i > 0)
    {
      if (i % 10 == 2)
      {
        count++;
      }
      i /= 10;
    }
  }
  printf("%d", count);
  return 0;
}