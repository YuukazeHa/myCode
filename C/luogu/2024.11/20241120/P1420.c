#include <stdio.h>
int main(void)
{
  int n;
  int number[100000];
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &number[i]);
  }
  int j = 0;
  int z = 0;
  int max[100000];
  for (int i = 0; i < n; i++)
  {
    if (number[i] == number[i + 1] - 1)
    {
      j++;
    }
    else
    {
      max[z++] = j;
      j = 0;
    }
  }
  int m = max[0];
  for (int i = 1; i < z; i++)
  {
    if (m < max[i])
    {
      m = max[i];
    }
  }
  printf("%d", m + 1);
  return 0;
}