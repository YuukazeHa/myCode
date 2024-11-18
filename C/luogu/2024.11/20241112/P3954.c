#include <stdio.h>
int main(void)
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  int d = (a * 0.2) + (b * 0.3) + (c * 0.5);
  printf("%d", d);
  return 0;
}