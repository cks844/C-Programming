#include <stdio.h>
int main()
{
    int a,d,sum=0,temp;
    printf("Enter a number : ");
    scanf("%d", &a);
    temp =a;
    while(a>0)
    {
        d=a%10;
        sum+=(d*d*d);
        a=a/10;
    }
    if(sum==temp)
        printf("\n%d is an amstrong number\n",temp);
    else
        printf("\n%d is not an amstrong number\n",temp);
    return 0;
}
