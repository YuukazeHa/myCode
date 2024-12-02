#include <stdio.h>
int main(void)
{
  int n;
  scanf("%d", &n);
  int number[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &number[i]);
  }
  int nums[100];
  int k = 1;
  for (int i = 1; i < n; i++)
  {
    int b = 0;
    for (int j = 0; j < i; j++)
    {
      if (number[i] > number[j])
      {
        nums[k] = ++b;
      }
      if(b==0){
        nums[k] = 0;
      }
    }
    k++;
  }
  printf("0");
  for (int i = 1; i < k; i++)
  {
    printf(" %d", nums[i]);
  }
  return 0;
}