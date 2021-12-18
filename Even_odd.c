#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number to check:");
    scanf("%d",&n);
    if(n%2==0)
        printf("\t%d is an even number",n);
    else
        printf("\t%d is an odd number",n);
    return 0;
}
