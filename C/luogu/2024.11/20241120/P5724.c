#include <stdio.h>

int max(int number[], int n)
{
  int max = number[0];
  for (int i = 1; i < n; i++)
  {
    if (max < number[i])
    {
      max = number[i];
    }
  }
  return max;
}

int min(int number[], int n)
{
  int min = number[0];
  for (int i = 1; i < n; i++)
  {
    if (min > number[i])
    {
      min = number[i];
    }
  }
  return min;
}

int main(void)
{
  int n;
  int number[1002];
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &number[i]);
  }
  int m, c;
  m = max(number, n);
  c = min(number, n);
  printf("%d", m - c);
  return 0;
}