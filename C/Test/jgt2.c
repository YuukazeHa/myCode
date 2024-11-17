#include <stdio.h>
#include <string.h>

typedef struct
{
  int number;
  char name[10];
} student;

student stu(int num, char *name)
{
  student a;
  a.number = num;
  strcpy(a.name, name);
  return a;
}

int main(void)
{
  student a = stu(1, "z");
  printf("%d %s\n", a.number, a.name);
  return 0;
}