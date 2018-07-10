#include <stdio.h>
#include <stdlib.h>

void regular()
{
    //Regular service: $10.00 plus first 50 minutes are free. Charges for over 50 minutes are $0.20 per minute.
    int min,cost,n;
    printf("\nEnter mins:");
    scanf("%d",&min);
    if(min<=50)
    {
        cost=10;
        printf("\nbill for regular service: %d",cost);

    }
    else if(min>=50)
    {
        cost=10;
        n=min-50;
        cost=cost+(n*.20);
         printf("\nbill for regular service: %d",cost);
    }
   getch();
}
void premium_d()
{
    int min,n;
    float cost;
    printf("\nEnter mins:");
    scanf("%d",&min);
    //For calls made from 6:00 a.m. to 6:00 p.m., the first 75 minutes are free; charges for more than 75 minutes are $0.10 per minute.
    if(min<=75)
    {
        cost=25;
         printf("\nbill for premium day service: %.3f",cost);
    }
    else if(min>=75)
    {
        cost=25;
        n=min-75;
        cost=cost+(n*.10);
        printf("\nbill for premium day service: %.3f",cost);
    }
    getch();

}
void premium_n()
{
    int min,n;
    float cost;
    printf("\nEnter mins:");
    scanf("%d",&min);
    if(min<=100)
    {
        cost=25;
         printf("\nbill for premium day service: %.3f",cost);
    }
    else if(min>=100)
    {
        cost=25;
        n=min-100;
        cost=cost+(n*.05);
        printf("\nbill for premium night service: %.3f",cost);
    }
    getch();
}


int main()
{
    int name;
    char code,c;
    printf("\nEnter account number:");
    scanf("%d",&name);
    printf("\n\nenter R or r for Regular Service\n");
    printf("\n\nenter P or p for Premium Service\n");
    fflush(stdin);
    printf("\nEnter service code:");
    scanf("%c",&code);
    if(code=='R'||code=='r')
    {
        regular();
    }
    else if(code=='P'||code=='p')
    {
        printf("\nenter D or d for day premium service");
        printf("\nenter N or n for night premium service");
        fflush(stdin);
        printf("\n enter: ");
        scanf("%c",&c);
        if(c=='D'||c=='d')
        {
        premium_d();

        }
        else if(c=='n'||c=='N')
        {
            premium_n();
        }

    }
    else
    {
        printf("\n WRONG SERVICE CODE");
    }
    return 0;
}
