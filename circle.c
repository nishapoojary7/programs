#include<stdio.h>

int main()
{
    int rad;
    float PI = 3.14, area, ci;
    printf("Enter the radius of the circle:\n");
    scanf("%d", &rad);
    area = PI*rad*rad;
    printf(" Area of the circle is: %f\n", area);
    ci = 2*PI*rad;
    printf(" Circumference of the circle is:\n %f", ci);
    printf("Coding is Fun \n");
    return 0;
}
