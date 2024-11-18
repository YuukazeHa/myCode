#include <stdio.h>

typedef struct
{
  int max[3];
  int e;
} L;
// 定义结构体

void seq(L *E)
{
  E->e = 0;
  printf("%p\n", E);
  //输出结构体地址
}
// 初始化结构体变量  E为指针 指向结构体   E->指向结构体变量

//  ->用于通过指针访问结构体或联合体中的成员。

int main(void)
{
  L list;
  seq(&list); // 初始化

  return 0;
}