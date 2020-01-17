#include <stdio.h>

int main()
{
  int num,result;
  int i;
  while(scanf("%d",&num)!=EOF){
    result = 1;
    if(num > 31){
      printf("Value of more than 31\n");
    }
    else{
      for(i = 0; i < num; i++)
         result *= 2;
      printf("%d\n",result);
    }
  }
  return 0;
}