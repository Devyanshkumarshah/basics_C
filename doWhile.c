/*#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number you want to print till = ");
    scanf("%d", &n);

    int i = 1;
    do{
        printf("%d\n", i);
        i++;
    }

    while(i<=n);

    return 0;
    
}  */

// Keep tacking numbers as input from the user until user enters a number which is divisible of 7.

#include<stdio.h>

int main()
{

    int n;
    

    do
    {
        printf("Enter the number you want to check = ");
        scanf("%d", &n);
        printf("%d\n", n);

        if(n % 7 == 0)
        {
            break;
        }

    }
    while(1);
    printf("Thankyou\n");

    return 0;

}
  
