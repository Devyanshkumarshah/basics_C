#include<stdio.h>
#include<string.h>

void str_rev(char str[])
{
    int s = 0;
    int l = strlen(str) - 1 ;
    char t;
  
    while(s < l)
    {
        t = str[s];
        str[s] = str[l];
        str[l] =  t;
        s++;
        l--;
    }
}

int main()
{
    char str[9] = "Devyansh";

    str_rev(str);

    printf("%s", str);
    return 0;
}

output - hsnayveD
