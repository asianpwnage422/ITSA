#include <stdio.h>
int main()
{
  int N;
  int i;
  scanf("%d",&N);
  for(i = 1; i <= N; i++){
    printf("%d*%d=%d\n",i,i,i*i);
  }
  return 0;
}