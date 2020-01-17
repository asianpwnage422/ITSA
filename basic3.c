#include <stdio.h>  
#include <math.h>  
  
int main()  
{  
  int x,y,x_2, y_2, length;  
  while(scanf("%d %d",&x,&y) != EOF){   
    x_2 = x*x;  
    y_2 = y*y;  
    length = x_2 + y_2;  
    if(length > 10000)  
      printf("outside\n");  
    else  
      printf("inside\n");  
  }  
  return 0;  
}  
