#include<stdio.h>
int main()
{
    int a;
    char b;
    printf("\t Restaurant Menu\n");
    printf("Enter 1 for Beverages\n 2 For Main course 3 for Desserts 4 ");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
             printf("Enter 1 for Pepsi 2 for Coke 3 for Sprite");
             scanf("%d",&a);
                switch(a)
                {
                    case 1:
                        printf("You have selected Pepsi");
                        break;
                    case 2:
                        printf("You have selected Coke");
                        break;
                    case 3:
                    printf("You have selected Sprite");
                        break;
                    default:
                        printf("Invalid input");
                        break;
                }
            break;
        case 2:
            printf("Enter 1 for Pizza 2 for Burger 3 for Pasta");
            scanf("%d",&a);
            switch(a)
            {
                case 1:
                printf("You have selected Pizza");      
                break;
                case 2:
                printf("You have selected Burger");
                break;
                case 3:
                printf("You have selected Pasta");
                break;
                default:
                printf("Invalid input");
                break;
            }
            break;
        case 3:
            printf("Enter 1 for Ice Cream 2 for Cake 3 for Brownie");
            scanf("%d",&a);
            switch(a)
            {
                case 1:
                printf("You have selected Ice Cream");
                break;
                case 2:
                printf("You have selected Cake");
                break;
                case 3:
                printf("You have selected Brownie");
                break;
                default:
                printf("Invalid input");
                break;
            }
            break;
        default:
            printf("Invalid input");
            break;
    }
    return 0;
}