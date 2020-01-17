#include <stdio.h>

int main()
{
  int num;
  double result;
  while(scanf("%d",&num) != EOF){
    result = (double) num * (1.6);
    printf("%.1lf\n",result);
  }
  return 0;
}