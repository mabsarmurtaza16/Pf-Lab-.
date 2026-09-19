#include<stdio.h>
int main()
{
    int a, b, c;

    printf("Program to determine whether it's a valid triangle or not if it then what type of triange it is \n");
    printf("Enter three sides of triangle");
    scanf("%d %d %d",&a ,&b ,&c);

    if(a+b>c && a+c>b && b+c>a)
    {
        printf("it's a triangle\n");
        if(a == b && b == c)
        {
            printf("Equalateral triangle");
        }
        else if( a == b || a == c || b == c)
        {
            printf("Isoceles Triangle");
        }
        else
        {
            printf("scalene Triangle");
        }
    }
    else
    {
        printf("It's not a triangle");
    }
    return 0;
}