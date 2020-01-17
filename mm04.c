#include <stdio.h>
int main()
{
  int a, b;
  int div, mod;
  
  scanf("%d %d",&a,&b);
  printf("%d+%d=%d\n",a,b,a+b);
  printf("%d*%d=%d\n",a,b,a*b);
  printf("%d-%d=%d\n",a,b,a-b);
  div = a/b;
  mod = a%b;
  if((a%b) < 0){
    //printf("yeah\n");
    mod  = (a%b) + b;
    div = (a/b) - 1;
  }
  printf("%d/%d=%d...%d\n",a,b,div,mod);
  return 0;
}