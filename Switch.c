#include<stdio.h>
int main()
{
    int day; //1- monday, 2 - tuesday, 3 - wednesday, 4 - thrusday, 5 - Friday, 6 - saterday, 7 - sunday:

    printf("Enter the Day you want to check = ");
    scanf("%d", &day);

    switch(day)
    {
        case 1:
        printf("Monday");
        break;

        case 2:
        printf("Tuesday");
        break;

        case 3:
        printf("Wednesday");
        break;

        case 4:
        printf("Thrusday");
        break;

        case 5:
        printf("Friday");
        break;

        case 6:
        printf("Saterday");
        break;

        case 7:
        printf("Sunday");
        break;
   
        default : printf("The number entered does not lie in between 1 to 7 !");
    
    }

    
}