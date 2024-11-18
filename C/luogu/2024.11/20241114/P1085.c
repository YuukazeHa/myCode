#include <stdio.h>
int main(void)
{
  int number[7];
  int cat[7];
  int max[7];
  int t;
  for (int i = 0; i < 7; i++)
  {
    scanf("%d %d", &number[i], &cat[i]);
  }
  for (int i = 0; i < 7; i++)
  {
    max[i] = number[i] + cat[i];
  }
  int temp = max[0];
  for (int i = 0; i < 7; i++)
  {
    if (max[i] > temp)
    {
      temp = max[i];
      t = i;
    }
  }
  if (temp > 8)
  {
    printf("%d", t + 1);
  }
  else
  {
    printf("0");
  }
  return 0;
}