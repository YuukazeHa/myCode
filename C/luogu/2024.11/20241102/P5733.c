#include <stdio.h>
#include <string.h>
int main(void)
{
  int i, n;
  char str[101];
  scanf("%s", &str);
  n = strlen(str);
  for (i = 0; i < n; i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
    {
      str[i] = str[i] - 'a' + 'A';
    }
  }
  printf("%s", str);
  return 0;
}