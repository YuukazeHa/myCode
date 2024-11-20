#include <stdio.h>
int main(void)
{
  int n;
  double y;
  double sum;
  scanf("%d", &n);
  if (n <= 150)
  {
    y = n * 0.4463;
    sum = y;
  }
  else if (n > 150 && n <= 400)
  {
    y = (n - 150) * 0.4663;
    sum = y + 150 * 0.4463;
  }
  else
  {
    y = (n - 400) * 0.5663 + (400 - 150) * 0.4663;
    sum = y + 150 * 0.4463;
  }
  printf("%.1lf", sum);
  return 0;
}