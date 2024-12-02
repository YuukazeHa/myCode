#include <stdio.h>
#include <string.h>
int main(void)
{
  int n = -1;
  char c[100];
  fgets(c, sizeof(c), stdin);
  for (int i = 0; c[i] != '\0'; i++)
  {
    if (c[i] == ' ')
    {
      continue;
    }
    else
    {
      n++;
    }
  }
  printf("%d", n);
  return 0;
}