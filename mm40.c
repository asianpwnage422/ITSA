#include <stdio.h>

int main()
{
  int num;
  int i,sum;
  while(scanf("%d",&num) != EOF){
    sum = 0;
    for(i = 1; i <= num; i++){
      sum += i;
      if(i == num)
        printf("%d = ",i);
      else
        printf("%d + ",i);
    }
    printf("%d\n",sum);
  }
  return 0;
}