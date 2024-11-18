#include <stdio.h>
int main(void)
{
  char c;
  int i;
  while ((c = getchar()) != '\n')
  {
    if (c != ' ')
    {
      i++;
      if (i > 5)
      {
        return 0;
      }
    }
  }
  printf("%d", i);
  return 0;
}