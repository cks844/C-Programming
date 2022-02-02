#include <stdio.h>
int main()
{
    int i,j,k,size;
    printf("Enter the maximum number:");
    scanf("%d",&size);
    for(i=size;i>=1;i--)
    {
      for (j=i;j>=1;j--)
        {
         printf("%d",i);
        }
    }
    printf("\n");

    return 0;
}
