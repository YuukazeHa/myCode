#include <stdio.h>
int queue[1000000];
int top = 0;
int t = 0;
void push(int num)
{
  queue[top++] = num;
  return;
}

void pop()
{
  if (top == t)
  {
    printf("ERR_CANNOT_POP\n");
  }
  else
  {
    t++;
  }
  return;
}

void query()
{
  if (top == t)
  {
    printf("ERR_CANNOT_QUERY\n");
  }
  else
  {
    printf("%d\n", queue[t]);
  }
  return;
}

void size()
{
  if (top == t)
  {
    printf("0\n");
  }
  else
  {
    printf("%d\n", top - t);
  }
  return;
}

int main(void)
{
  int n;
  // 操作次数
  scanf("%d", &n);
  int a;
  int x;
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a);
    switch (a)
    {
    case 1:
      scanf("%d", &x);
      push(x);
      break;
      // 队列增

    case 2:
      pop();
      break;
      // 弹出队列首

    case 3:
      query();
      break;
      // 查询队首

    case 4:
      size();
      break;
      // 输出队列元素个数

    default:
      break;
    }
  }

  return 0;
}