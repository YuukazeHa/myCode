#include <stdio.h>

char data[255];
int count = 0;
int number = 0;

int main(void)
{
  for (int i = 0; i < 255; i++)
  {
    scanf("%c", &data[i]);
    if (data[i] == '@')
    {
      break;
    }
    number++;
  }
  for (int i = 0; i < number; i++)
  {
    if(count==0&&data[i]==')'){
      printf("NO");
      return 0;
    }
    if (data[i] == '(')
    {
      count++;
    }
    if (data[i] == ')')
    {
      count--;
    }
  }
  if (count == 0)
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }
}