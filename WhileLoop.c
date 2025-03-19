#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number till where you want to print the number = ");
    scanf("%d", &n);

    int i = 1;
    while(i <= n)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
    
    
}