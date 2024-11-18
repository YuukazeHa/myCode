#include <stdio.h>
int main(void)
{
  int N;
  scanf("%d", &N);
  int number[N];
  char ch[N][21];
  int max = 0;
  int k = 0;
  for (int i = 0; i < N; i++)
  {
    scanf("%d %s", &number[i], &ch[i]);
  }
  for (int i = 0; i < N; i++)
  {
    if (max < number[i])
    {
      max = number[i];
      k = i;
    }
  }
  printf("%s", ch[k]);
  return 0;
}