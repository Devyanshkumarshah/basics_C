#include<stdio.h>
int main()
{
    char abc = 'z';
    char *ptr;

    ptr = &abc;

    printf("&abc: %p, ptr: %p, sizeof(ptr): %ld\n", &abc, ptr, sizeof(ptr));

    return 0;
}

output - &abc: 0061FF1B, ptr: 0061FF1B, sizeof(ptr): 4



/*sum of elements of the array*/

#include<stdio.h>
int main()
{
    int a[] = {11,2,36,4,90,81};
    int sum = 0, *p;

    for(p = &a[0]; p <= &a[4]; p++){
        sum += *p;
    }
    printf("sum of the array is %d", sum);
}

output - sum of the array is 143
