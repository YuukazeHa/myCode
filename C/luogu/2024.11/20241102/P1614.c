#include <stdio.h>
int main(void)
{
  int n, m;
  int c, k;
  int min;
  // int asd[1000];
  scanf("%d %d", &n, &m);
  int num[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &num[i]);
  }

  int curr_sum = 0;
  for (int i = 0; i < k; i++)
  {
    curr_sum += num[i];
  }
  min = curr_sum;

  for (int i = k; i < c; i++)
  {
    curr_sum += num[i] - num[i - k];

    if (curr_sum < min)
    {
      min = curr_sum;
    }
  }
  printf("%d", min);
  return 0;
}