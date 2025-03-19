/* This program is designed to demonstrate and illustrate structure padding and data alignment in C. */

#include<stdint.h>
#include<stdio.h>

struct dataSet//total of 8 byte of memory is being is consumed by the structure rest of 4 byte is taken as padding
{
    char data1;
    int data2;
    char data3;
    short data4;
};



int main(void)
{

    struct dataSet data;  //created a variable named data of type of dataset

    data.data1 = 0x11;
    data.data2 = 0xFFFFEEEE;
    data.data3 = 0x22;
    data.data4 = 0xABCD;


    uint8_t *ptr;// is used in the program to achieve byte-level access to the memory occupied by the struct dataSet

    ptr = (uint8_t*)&data; //is used to obtain a byte-level pointer to the memory location of the variable data.

    uint32_t totalSize = sizeof(struct dataSet);//here we have taken the total size of struct data in "totalSize" to print the content of the structure.
    printf("Memory address      content\n");
    printf("============================\n");

    for(uint32_t i=0; i < totalSize; i++)//taken for loop to print the content of the structure
    {
    	printf("%p                 %X\n", ptr,*ptr); // to print the address of pointer and data stored in the pointer.
    	ptr++;// to increase the value of the pointer.
    }

    printf(" Total memory consumed by the struct variable  = %lu\n", sizeof(struct dataSet));//I64u format specifier is used for printing the size as an unsigned 64-bit integer


    getchar();
}
