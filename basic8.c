#include <stdio.h>
int main() 
{
  int n, i, flag;
  while(scanf("%d", &n) != EOF){
    flag = 0;
    for (i = 2; i <= n / 2; ++i) {
        // condition for non-prime
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    if (n == 1) {
        printf("YES\n");
    }
    else {
        if (flag == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
  }
    return 0;
}