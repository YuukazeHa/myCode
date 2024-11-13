#include <stdio.h>

struct point
{
  int a;
  int b;
};

struct point jgt(int x, int y)
{
  struct point p = {x,y};
  return p;
}

int main(void)
{
  int x, y;
  struct point p;
  scanf("%d %d", &x, &y);
  p=jgt(x, y);
  printf("%d %d", p.a, p.b);
  return 0;
}