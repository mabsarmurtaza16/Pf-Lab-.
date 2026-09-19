#include<stdio.h>
#include<math.h>
int main()
{
    int a,ip,ba,sqp;
    float b, pro, div, sqr, square, sum, diff;
    char h;
    printf("Enter Number 1");    
    scanf("%d",&a);

    printf("Enter Number 2");    
    scanf("%f",&b);
    printf("Enter 1 for Basic arithmetic and 2 for Power/root operations");
    scanf("%d",&ip);
    switch(ip)
    {
        case 1:
        printf("Enter 1 for Addition 2 for Subtraction 3 for Multiplication 4 for Division");
        scanf("%d",&ba);
        switch(ba)
        {
            case 1:
            sum = a+b;
            printf("The sum of two number is %.2f",sum);
            break;
            case 2:
            diff = a-b;
            printf("The difference of two number is %.2f",diff);
            break;
            case 3:
            pro = a*b;
            printf("The Product of two number is %.2f",pro);
            break;
            case 4:
            div = a/b;
            printf("The division of two number is %.2f",div);
            break;
            default:
            printf("Invalid input");
            break;
        }
        break;
        case 2:
        printf("Enter S for Square and R for square root");
        scanf(" %c",&h);
        switch(h)
        {
            case 'S':
            square = pow(a,2);
            printf("The square of the number 1 is %.2f",square);
            break;
            case 'R':
            sqr = sqrt(a);
            printf("The square root of the number 1 is %.2f",sqr);
            break;
            default:
            printf("Invalid input");
            break;
        }
        break;


    }
    return 0;}
