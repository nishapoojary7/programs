#include<stdio.h>
int main()
{
    int a,b,largest;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
    largest=a;
    }
    else
    {
        largest=b;
    }
    printf("the largest of two numbers is %d",largest);

}
