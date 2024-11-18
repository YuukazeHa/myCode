#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
  int number;
  char *name;
} Student;
// 定义结构体

Student inStu(int num, char *name)
{
  Student A;
  A.number = num;

  A.name = malloc((strlen(name) + 1) * sizeof(char));
  // 分配内存

  strcpy(A.name, name);
  return A;
}
// 结构体赋值

void outStu(Student *pStu)
{
  printf("%d %s\n", pStu->number, pStu->name);
}
// 输出结构体

int main(void)
{
  Student list = inStu(123, "Y");
  Student *A = &list;
  outStu(A);

  list = inStu(1001, "U");
  outStu(A);

  return 0;
}