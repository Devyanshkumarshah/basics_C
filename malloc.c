#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, n;

    printf("Enter the no. of integers: ");
    scanf("%d", &n);

    int *ptr = (int*)malloc(n*sizeof(int));  //perticular amount of memory is now reserved for the numbers using malloc
     /*thus the above pointer variable points out the starting block of memory from where the memory is assignes till n*sizeof(int) */ 

    int size_mal = n*sizeof(*ptr);

    printf("Memory allocated to the ptr to store data is: %d bytes\n", size_mal);

    if(ptr == NULL){
        printf("Memory not available");
        exit(1);
    }
    
    for(int i = 0; i < n; i++)
    {
        printf("Enter an integer: ");
        scanf("%d", ptr+i);    //if ptr == 1000  then ptr+1 = 1000 + 4
    }

    for(int i= 0; i < n; i++){
        printf("%d ", *(ptr+i));

        printf("pointer memory of %d is %p: \n", i, (ptr + i)); //the ptr+i may be of int type and we are trying to print the pointer variable 
        printf("pointer memory of %d is %p: \n", i, (void*)(ptr + i));   //match the %p specifere type 
    }
}

/*There’s no standard way in C to find out how many bytes malloc() allocated after calling it. You must keep track of it yourself.

*/


output - 
  Enter the no. of integers: 5
Memory allocated to the ptr to store data is: 20 bytes
Enter an integer: 4
Enter an integer: 8
Enter an integer: 9
Enter an integer: 3
Enter an integer: 7
4 pointer memory of 0 is 00D22F30: 
pointer memory of 0 is 00D22F30:
8 pointer memory of 1 is 00D22F34:
pointer memory of 1 is 00D22F34:
9 pointer memory of 2 is 00D22F38:
pointer memory of 2 is 00D22F38:
3 pointer memory of 3 is 00D22F3C:
pointer memory of 3 is 00D22F3C:
7 pointer memory of 4 is 00D22F40:
pointer memory of 4 is 00D22F40:
