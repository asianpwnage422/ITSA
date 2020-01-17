#include <stdio.h>

int main()
{
  int num;
  while(scanf("%d",&num) != EOF){
    if((num % 400) == 0)
      printf("Bissextile Year\n");
    else if((num % 100) == 0)
      printf("Common Year\n");
    else if((num % 4) == 0)
      printf("Bissextile Year\n");
    else 
      printf("Common Year\n");
  }
  return 0;
}