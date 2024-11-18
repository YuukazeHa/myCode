#include <stdio.h>
int main(void)
{
  int a;
  // 向下取整 int类型自动忽略小数
  int cout = 1;
  scanf("%d", &a);
  while (a != 1)
  // 不等1时 继续除以2
  {
    a /= 2;
    cout++;
  }
  printf("%d", cout);
}