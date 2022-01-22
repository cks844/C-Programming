#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],n,i,j,sum;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the sum of two elements to be searched:");
    scanf("%d",&sum);
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==sum)
            printf("The two elements are %d and %d at location %d and %d",a[i],a[j],i+1,j+1);

        }
    }


    return 0;
}

