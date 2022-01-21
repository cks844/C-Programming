#include <stdio.h>
int main()
{
    int a[100],n,sum=0,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("\nEnter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("\n Sum of the elements is: %d", sum);
    return 0;
}
