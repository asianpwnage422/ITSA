#include <stdio.h>

int main()
{
  double num;
  float result;

  while(scanf("%lf",&num) != EOF){
    result = (float)num * num;
    result = result + 0.005;
    printf("%.1f\n",result);
  }
  return 0;
}