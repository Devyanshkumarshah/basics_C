#include<stdio.h>
int main()
{
    int a, b;

    printf("enter the value of a ");
    scanf("%d", &a);

    printf("enter the value of b ");
    scanf("%d", &b);

    int sum = a + b;
    printf("the sum of both the number entered is %d", sum);
    printf("product of the numbers is : %d", a*b);
    return 0;
}