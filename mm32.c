#include <stdio.h>
int main()
{
  int num;
  int first, second, third;
  while(scanf("%d",&num) != EOF){
    first = num/100;
    second = (num/10) % 10;
    third = num % 10;
    if(num == first*first*first + second*second*second + third*third*third)
      printf("Yes\n");
    else
      printf("No\n");
  }
  return 0;
}