#include<stdio.h>
int main()
{
    char a,b;
    printf("enter the traffic light color (R for Red, Y for Yellow, G for Green) (input should be in uppercase)");
    scanf(" %c",&a);
    printf("Is the pedestarian button pressed? (Y for Yes, N for No) (input should be in uppercase)");
    scanf(" %c",&b);
    switch(a)
    {
        case 'R':
        switch(b)
        {
            case 'Y':
            printf("The light is Red and the pedestarian button is pressed, Go and cross the road");
            break;
            case 'N':
            printf("The light is Red and the pedestarian button is not pressed, Go and cross the road");
            break;
            default:
            printf("Invalid input");
            break;
        }
        break;
        case 'Y':
        printf("The light is Yellow, stop and cross");
        break;
        case 'G':
        switch(b)
        {
            case 'Y':
            printf("The light is Green and the pedestarian button is pressed, please wait for the light to turn Red");
            break;
            case 'N':
            printf("The light is Green and the pedestarian button is not pressed, please wait for the light to turn Red");
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
}