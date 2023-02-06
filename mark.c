#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks");
    scanf("%d",&marks);
    if(marks>=75)
    printf("\n distinction");
    else if(marks>=60 && marks<75)
    printf("\n first class ");
    else if(marks>=50 && marks<60)
    printf("\nsecond class");
    else if(marks>=40 && marks<50)
    printf("\n pass");
    else
    printf("\n fail");

}