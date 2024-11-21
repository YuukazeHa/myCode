#include <stdio.h>
int main(void)
{
  int n;
  scanf("%d", &n);
  int k = 1;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%02d", k++);
    }
    printf("\n");
  }
  k = 1;
  for (int i = 0; i <= n; i++)
  {
    for (int h = 0; h < n - i ; h++)
    {
      printf("  ");
    }
    for (int j = 0; j < i; j++)
    {
      printf("%02d", k++);
    }
    printf("\n");
  }
  return 0;
}