#include <stdio.h>

int main()
{
  int num;
  float ans;
  while(scanf("%d",&num) != EOF){
    ans = num * 0.9;
    if(num > 800 && num < 1500)
      ans = ans * 0.9;
    else if(num >= 1500)
      ans = ans * 0.79;
    printf("%.1f\n",ans);
  }
  return 0;
}