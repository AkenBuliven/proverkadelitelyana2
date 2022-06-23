# proverkadelitelyana2

Степень двойки 
По данном числу 
N
N определить, является ли оно степенью числа 
2
2.

Входные данные:
Одно целое неотрицательное число 
N
N.

Выходные данные: 
YES -- если число 
N
N является степенью двойки, и NO в противном случае.


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
