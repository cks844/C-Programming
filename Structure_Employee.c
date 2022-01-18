#include <stdio.h>
int main(){
struct employee{
  char name[20];
  float salary;
  int age;
  };
  struct employee emp1;
    printf("Enter the name of the employee:");
    gets(emp1.name);
    printf("Enter the salary:");
    scanf("%f",&emp1.salary);
    printf("Enter the age:");
    scanf("%d",&emp1.age);
    printf("Details of the employee");
    printf("\n Name:%s",emp1.name);
    printf("\n Salary:%f",emp1.salary);
    printf("\n Age:%d",emp1.age);
    return 0;
}
