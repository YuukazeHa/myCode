#include <stdio.h>
int main(void)
{
  int n;
  scanf("%d", &n);
  int a = n;
  long long jc = 1;

label:
  jc *= a;
  a--;
  if (a > 0)
  {
    goto label;
  }
  printf("%lld", jc);
  return 0;
}