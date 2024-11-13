#include <stdio.h>
int main(void)
{
  int n;
  scanf("%d", &n);
  if (n * 3 + 11 < 5 * n)
  {
    printf("Luogu");
  }
  else
  {
    printf("Local");
  }
  return 0;
}