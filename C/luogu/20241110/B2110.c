#include <stdio.h>
#include <string.h>
int main(void)
{
  char str[1100];
  scanf("%s", &str);
  int count[26] = {0};
  // 将每个元素初始化
  int n = strlen(str);
  // 计算字符串长度

  for (int i = 0; i < n; i++)
  {
    count[str[i] - 'a']++;
  }
  // 计算每个字母出现的次数

  for (int i = 0; i < n; i++)
  {
    if (count[str[i] - 'a'] == 1)
    {
      printf("%c", str[i]);
      return 0;
    }
  }
  printf("no");
  return 0;
}