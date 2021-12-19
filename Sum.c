#include <stdio.h>
int sum(int,int );
int main()
{
    int num1,num2,result;
    do
    {
    printf("Enter two numbers num1,num2:");
    scanf("%d %d",&num1,&num2);
    result=sum(num1,num2);
    printf("The sum of two numbers is %d",c);
    printf("\n Do you want to continue(If YES,please type Y or y):");
    scanf(" %c",&c);
    }while(c=='Y'||c=='y');
    return 0;
}
int sum(int a,int b)
{
    int sum;
    char c;
    sum=a+b;
    return sum;
}
