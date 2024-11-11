#include <stdio.h>
int main(void)
{
  int n, k;
  int Asum = 0, Bsum = 0;
  int cout1 = 0, cout2 = 0;
  scanf("%d %d", &n, &k);
  for (int i = 1; i <= n; i++)
  {
    if (i % k == 0)
    {
      // A类数
      Asum += i;
      cout1++;
    }
    else
    {
      // B类数
      Bsum += i;
      cout2++;
    }
  }
  double A = (double)Asum / cout1;
  double B = (double)Bsum / cout2;
  printf("%.1lf %.1lf", A, B);
  return 0;
}