#include <stdio.h>

int main()
{
  int num;
  int i;
  int result;
  while(scanf("%d",&num) != EOF){
    result = 0;
    for(i = 1; i <= num; i++){
      if( i%3 == 0)
        result += i;
    }
    printf("%d\n",result);
  }
  return 0;
}