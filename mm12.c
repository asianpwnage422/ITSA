#include <stdio.h>
int main()
{
  int dis;
  float time;
  int test;
  while(scanf("%d",&dis) != EOF){
    time = (float) dis / 0.238;
    test = time;
    if(time == test)
      printf("%d\n",test);
    else
      printf("%d\n",test+1);
  }
  return 0;
}