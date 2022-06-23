#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    scanf("%d", &n);
    while(n > 1)
    
        n /= 2;
    
    if(n == 1)
        printf("YES");
    else
        printf("NO");
    return 0;
}