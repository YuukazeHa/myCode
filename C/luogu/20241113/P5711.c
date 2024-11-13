#include <stdio.h>
int main(void)
{
  int n;
  scanf("%d", &n);
  printf("%d", n % 4 == 0 && n % 100 != 0 || n % 400 == 0);
  return 0;
}