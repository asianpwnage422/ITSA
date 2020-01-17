#include <stdio.h>
int main()
{
  int hours,wage;
  float payment;
  while(scanf("%d %d",&hours,&wage) != EOF){
    if(hours >= 121)
      payment = (hours - 120) * 1.66 * wage + 60 * 1.33 * wage + 60 * wage;
    else if(hours > 60 && hours <= 120)
      payment = (hours-60) * 60 * 1.33 * wage + 60 * wage;
    else
      payment = hours * wage;
    
    printf("%.1f\n",payment);
  }
  return 0;
}