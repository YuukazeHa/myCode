#include <stdio.h>
int main(void)
{
  int n, k;
  double sum = 0;
  scanf("%d", &k);
  for (int i = 1;; i++)
  {
    sum = sum + (1.0 / i);
    if (sum > k * 1.0)
    {
      n = i;
      break;
    }
  }
  printf("%d", n);
  return 0;
}