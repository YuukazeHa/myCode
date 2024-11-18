#include <stdio.h>
int main(void)
{
  int a, b;
  int sum = 0;
  scanf("%d %d", &a, &b);
  for (int i = a + 1; i < b; i++)
  {
    if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
    {
      sum += i;
    }
  }
  printf("%d", sum);
  return 0;
}