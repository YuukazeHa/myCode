#include <stdio.h>
int main(void)
{
  int n;
  int a1, a2, a3, a4;
  int b1, b2, b3, b4;
  int c1, c2, c3, c4;
  scanf("%d %d %d %d %d %d %d", &n, &a1, &a2, &b1, &b2, &c1, &c2);
  // if (n % a1 != 0)
  // {
  //   a3 = (int)(n / (double)a1);
  // }
  // else
  // {
  //   a3 = n / a1;
  // }
  // a4 = a3 * a2;

  // if (n % b1 != 0)
  // {
  //   b3 = (int)(n / (double)b1);
  // }
  // else
  // {
  //   b3 = n / b1;
  // }
  // b4 = b3 * b2;
  // if (n % c1 != 0)
  // {
  //   c3 = (int)(n / (double)c1);
  // }
  // else
  // {
  //   c3 = n / c1;
  // }
  // c4 = c3 * c2;
  int number[3] = {a1, b1, c1};
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3 - i; j++)
    {
      if (number[j] > number[j + 1])
      {
        int temp = number[j + 1];
        number[j + 1] = number[j];
        number[j] = temp;
      }
    }
  }
  printf("%d", number[0]);
  return 0;
}