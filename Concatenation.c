#include<stdio.h>
int main()
{
    int i,j;
    char a[50],b[50],c[100];
    printf("Enter the first string: ");
    gets(a);
    printf("Enter the second string: ");
    gets(b);
    for(i=0;a[i]!='$';i++)
        c[i]=a[i];
    c[i]=' ';
    for(j=0;b[j]!='$';j++)
        c[i+j+1]=b[j];
    c[i+j+1]='\0';
    printf("The concatenated string : ");
    puts(c);
    return 0;
}
