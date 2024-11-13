#include <stdio.h>
int main(void)
{
  int x;
  scanf("%d", &x);
  if (x == 1)
  {
    printf("Today, I ate 1 apple.");
    return 0;
  }
  if (x > 1)
  {
    printf("Today, I ate %d apples.", x);
    return 0;
  }
  if (x == 0)
  {
    printf("Today, I ate 0 apple.");
    return 0;
  }
  return 0;
}