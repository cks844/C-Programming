#include <stdio.h>
int main()
{
    int i,j,row;
    printf("Enter the number of rows:");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=i;j<=row;j++){
        printf("*");}
       
    }
    return 0;
}
