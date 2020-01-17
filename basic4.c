#include <stdio.h>

int main()
{
  int start_h,start_m,finish_h,finish_m;
  int time,cost;
  scanf("%d %d %d %d",&start_h,&start_m,&finish_h,&finish_m);
  
  time = (finish_h - start_h)*60 + finish_m - start_m;
  
  if(time <= 120)
    cost = (time/30) * 30;
  else if(time < 240)
    cost = 120 + (time - 120)/30 * 40;
  else if(time >= 240)
    cost = 280 + (time - 240)/30 * 60;
  printf("%d\n",cost);

  return 0;
}