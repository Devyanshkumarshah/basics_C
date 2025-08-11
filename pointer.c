#include<stdio.h>
int main()
{
    char abc = 'z';
    char *ptr;

    ptr = &abc;

    printf("&abc: %p, ptr: %p, sizeof(ptr): %ld\n", &abc, ptr, sizeof(ptr));

    return 0;
}
