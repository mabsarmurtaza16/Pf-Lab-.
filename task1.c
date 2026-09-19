#include<stdio.h>
int main()
{
    int a;
    printf(" Enter your marks (1-100) ");
    scanf("%d", &a);
    
    if(a >= 90)
    {
        if(a == 100) 
        {
            printf("Perfect Score");
        }
        else
        {
            printf(" Grade = A ");
        }
    }
    else if(a >= 75)
    {
        printf(" Grade = B ");
    }
    else if(a >= 60)
    {
        printf(" Grade = C ");
    }
    else if(a >= 40)
    {
        printf(" Grade = D ");
    }
    else
    {
        printf(" Grade = Fail ");
    }
    
    return 0; 
}