#include<stdio.h>
int main()
{ 
    int a,b,c;
    int balance1 = 100000;
    int balance2 = 230000;
    printf("Enter 1 for Savings Account and 2 for Current Account");
    scanf("%d",&a);
    printf("Enter 1 for Deposit, 2 for Withdraw and 3 for Check Balance");
    scanf("%d",&b);
    switch(a)
    {
        case 1:
            switch(b)
            {
                case 1:
                    printf("Enter amount to deposit: ");
                    scanf("%d",&c);
                    printf("Amount deposited in Savings Account: %d",c);
                    break;
                case 2:
                    printf("Withdraw amount: ");
                    scanf("%d",&c);
                    printf("Amount withdrawn from Savings Account: %d",c);
                    break;
                case 3:
                    printf("Check Balance of Savings Account: %d",balance1);
                    break;
            }
            break;
        case 2:
            switch(b)
            {
                case 1:
                    printf("Deposit amount: ");
                    scanf("%d",&c);
                    printf("Amount deposited in Current Account: %d",c);
                    break;
                case 2:
                    printf("Withdraw amount: ");
                    scanf("%d",&c);
                    printf("Amount withdrawn from Current Account: %d",c);
                    break;
                case 3:
                    printf("Check Balance of Current Account: %d",balance2);
                    break;
            }
            break;
    }
    return 0;
}