#include <stdio.h>
int main(void)
{
  int n;
  char c[51];
  int k;
  scanf("%d", &n);
  scanf("%s", c);
  for (int i = 0; c[i] != '\0'; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (c[i] == 'z'&&j<n)
      {
        c[i] = 'a';
      }else{
        c[i] += 1;
      }
    }
  }
  printf("%s", c);
  return 0;
}