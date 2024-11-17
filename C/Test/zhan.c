#include <stdio.h>
int top = -1;
int n = 5;
int stack[5];
void in(int num)
{
  if (top == n - 1)
  {
    printf("栈满\n");
    return;
  }
  stack[++top] = num;
}

void out(int num)
{
  if (top == -1)
  {
    printf("栈空\n");
    return;
  }
  top--;
}

int main(void)
{
  int num;
  while (1)
  {
    scanf("%d", &num);
    in(num);
  }
}