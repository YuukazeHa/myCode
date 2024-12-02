#include <stdio.h>

int ss(int num)
{
  for (int i = 2; i * i <= num; i++)
  {
    if (num % i == 0)
    {
      return 0;
    }
  }
  return 1;
}

int main(void)
{
  int l;
  scanf("%d", &l);
  int number[100000];
  int k = 0;
  int sum = 0;
  for (int j = 2; j < l; j++)
  {
    if (ss(j))
    {
      number[k++] = j;
      sum += j;
      if (sum > l)
      {
        k -= 1;
        break;
      }
    }
  }
  for (int i = 0; i < k; i++)
  {
    printf("%d\n", number[i]);
  }
  printf("%d", k);
}