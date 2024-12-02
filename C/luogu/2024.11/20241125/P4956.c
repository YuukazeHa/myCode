#include <stdio.h>
int main(void){
  int x,k;

  int n;
  //总数
  scanf("%d", &n);

  int t = 52;
  //52个星期

  int yuan = n / 52;
  int sum;
  //每周

  for ( k = 1; ;k++){
    for (x = 1;x<=100;x++){
      sum = 7 * x + 21 * k;
      if(yuan==sum){
        printf("%d\n%d", x, k);
        return 0;
      }
    }
  }
}