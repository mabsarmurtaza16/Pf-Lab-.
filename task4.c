#include<stdio.h>
int main()
{
    int a,price, units = 0;
    char b;
    printf("Bill Calculator\n");
    printf("Enter C for commercial and D for Domestic (input should be in uppercase)");
    scanf(" %c",&b);
    printf(" Enter Units consumed ");
    scanf("%d",&a);

    if(b=='C')
    {
        if(a<=100)
        {
            units = 20;
            price = units * a;
        }
        else if(a>100 && a<=300)
        {
            units = 40;
            price = units * a;
        }
        else 
        {
            units = 60;
            price = units * a;
        }
    }
    else if(b=='D')
    {
        if(a<=100)
        {
            units = 10;
            price = units * a;
        }
        else if(a>100 && a<=300)
        {
            units = 20;
            price = units * a;
        }
        else 
        {
            units = 30;
            price = units * a;
        }
    }
    printf("Units Consumed = %d",a);
    printf(" The Bill to be paid is: %d",price);
}