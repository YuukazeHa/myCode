#include <stdio.h>
int main(void)
{
  int n, k;
  int cout = 0;
  scanf("%d %d", &n, &k);
  for (int i = 1; i <= n; i++)
  {
    int a = i;
    while (a > 0)
    {
      if ((a % 10) == k)
      {
        cout++;
      }
      a /= 10;
    }
  }
  printf("%d", cout);
  return 0;
}