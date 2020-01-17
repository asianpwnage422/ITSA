#include <stdio.h>
int main()
{
  int num;
  int ten,five,one;
  int rem_ten;
  while(scanf("%d",&num) != EOF){
    ten = num / 10;
    rem_ten = num % 10;
    five = rem_ten / 5;
    one = rem_ten % 5;    
    printf("NT10=%d\nNT5=%d\nNT1=%d\n",ten,five,one);
  }
  return 0;
}