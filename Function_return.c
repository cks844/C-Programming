#include <stdio.h>
#include <stdlib.h>
float Calculator(float a,float b,float*sum,float*sub,float*prod,float*div)
{
    *sum=a+b;//declaring as pointers 
    *sub=a-b;
    *prod=a*b;
    *div=a/b;
}
int main()
{
    float a,b,sum,sub,prod,div;
   
    printf("Enter the greater value:");
    scanf("%f",&a);
    printf("Enter the smaller value:");
    scanf("%f",&b);
    Calculator(a,b,&sum,&sub,&prod,&div);
    printf("The sum is %f",sum);
    printf("\nThe difference is %f",sub);
    printf("\nThe product is %f",prod);
    printf("\nThe divider is %f",div);
    return 0;
}
