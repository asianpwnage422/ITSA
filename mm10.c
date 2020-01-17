#include <stdio.h>
int main()
{
  float temp;
  float ans;
  while(scanf("%f",&temp) != EOF)
  {
    ans = (temp*9)/5;
    printf("%.1f\n",ans + 32);
  }
  return 0;
}