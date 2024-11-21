#include <stdio.h>
int main(void)
{
  int N;
  scanf("%d", &N);
  if (N == 0)
  {
    printf("0");
    return 0;
  }
  if (N < 0)
  {
    printf("-");
    N = -N;
  }
  int sum = 0;
  while (N != 0)
  {
    int k = N % 10;
    sum = sum * 10 + k; 
    N = N / 10;         
  }
  printf("%d", sum);
  return 0;
}