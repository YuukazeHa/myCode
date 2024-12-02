#include <stdio.h>
int main(void)
{
  int k, j = 0, l = 1;
  scanf("%d", &k);
  for (int i = 1; i <= k; i++)
  {
    k -= i;
    j += l * l;
    l++;
  }
  printf("%d", j+k*l);
  return 0;
}