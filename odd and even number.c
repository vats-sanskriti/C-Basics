odd and even number.c
/*Check whether a number is even or odd*/
#include <stdio.h>
int main()
{
    int n;
    printf("\nEnterany number:");
    scanf("%d"  &n);
    if (n % 2 == 0)
    printf("The number is even\n");
    else
    printf("The number is odd\n");
    return 0;
    
}
