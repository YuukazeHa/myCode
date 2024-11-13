#include <stdio.h>
int main(void)
{
  int x;
  int a, b;
  scanf("%d", &x);
  printf("%d %d %d %d", x % 2 == 0 && x > 4 && x <= 12, x % 2 == 0 || (x > 4 && x <= 12) || x % 2 == 0 && x > 4 && x <= 12, (x % 2 == 0 && (x <= 4 || x > 12) || x % 2 != 0 && (x > 4 && x <= 12)), x % 2 != 0 && (x <= 4 || x > 12));
  return 0;
}