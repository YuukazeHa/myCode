#include <stdio.h>
int main(void)
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  int number[3] = {a, b, c};
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2 - i; j++)
    {
      if (number[j] > number[j + 1])
      {
        int temp = number[j + 1];
        number[j + 1] = number[j];
        number[j] = temp;
      }
    }
  }
  printf("%d %d %d", number[0], number[1], number[2]);
  return 0;
}