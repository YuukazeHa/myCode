#include <stdio.h>
int main(void)
{
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d", a >= 10 || b >= 20);
  return 0;
}