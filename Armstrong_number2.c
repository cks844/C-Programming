#include <stdio.h>
#include<math.h>
int main()
{
    int a,d,sum=0,temp,n;
    printf("Ënter the number of digits:");
    scanf("%d",&n);
    printf("\nEnter a number : ");
    scanf("%d", &a);
    temp =a;
    while(a>0)
    {
        d=a%10;
        sum+=pow(d,n);
        a=a/10;
    }
    if(sum==temp)
        printf("\n%d is an amstrong number\n",temp);
    else
        printf("\n%d is not an amstrong number\n",temp);
    return 0;
}
