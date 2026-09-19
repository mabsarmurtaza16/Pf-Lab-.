#include<stdio.h>
int main()
{
    int a, payable;
    char b;
    printf("Welcome to the ticket booking system");
    printf(" Enter your age ");
    scanf("%d", &a);
    printf(" Enter input in uppercase only ");
    printf(" Enter whether it's on weekend/holiday or Weekday (H for weekend/holiday, W for weekday) ");
    scanf(" %c", &b);
    int weekdayp =  1000;
    int weekendp =  1500;

    if(a > 60 || a<12)
    {
        if(b == 'H') 
        {
            printf("You are eligible for 20%% discount\n");
            payable = weekendp - (weekendp * 0.2);
        }
        else if(b == 'W')
        {
            printf("You are eligible for 20%% discount\n");
            payable = weekdayp - (weekdayp * 0.2);
        }
    }
    else
    {
        if(b == 'H') 
        {
            payable = weekendp;
        }
        else if(b == 'W')
        {
            payable = weekdayp; 
        }
    }
    printf("The payable amount is %d", payable);
    
    return 0; 
}
