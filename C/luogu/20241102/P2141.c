#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
  return (*(int *)a - *(int *)b);
}
int TwoSum(int array[], int n)
{
  qsort(array, n, sizeof(int), compare);
  int count = 0;
  for (int k = 0; k < n; k++)
  {
    int target = array[k];
    int i = 0, j = n - 1;
    while (i < j)
    {
      if (i == k)
      {
        i++;
        continue;
      }
      if (j == k)
      {
        j--;
        continue;
      }
      int sum = array[i] + array[j];
      if (sum == target)
      {
        count++;
        break;
      }
      else if (sum < target)
      {
        i++;
      }
      else
      {
        j--;
      }
    }
  }
  return count;
}

int main(void)
{

  int n;
  scanf("%d", &n);
  int array[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &array[i]);
  }

  int count = TwoSum(array, n);
  printf("%d\n", count);

  return 0;
}
//hello