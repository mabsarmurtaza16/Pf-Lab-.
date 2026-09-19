
#include <stdio.h>
int main()
{
    int a, b, c, d;

    printf("Enter first number: ");  
    scanf("%d", &a);
    printf("Enter second number: "); 
    scanf("%d", &b);
    printf("Enter third number: ");  
    scanf("%d", &c);
    printf("Enter fourth number: "); 
    scanf("%d", &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("%d: First one is the largest\n", a);
            }
            else
            {
                printf("%d: Fourth one is the largest\n", d);
            }
        }
        else
        {
            if (c > d)
            {
                printf("%d: Third one is the largest\n", c);
            }
            else
            {
                printf("%d: Fourth one is the largest\n", d);
            }
        }
    }
    else 
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("%d: Second one is the largest\n", b);
            }
            else
            {
                printf("%d: Fourth one is the largest\n", d);
            }
        }
        else
        {
            if (c > d)
            {
                printf("%d: Third one is the largest\n", c);
            }
            else
            {
                printf("%d: Fourth one is the largest\n", d);
            }
        }
    }

    return 0;
}