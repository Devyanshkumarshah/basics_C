/*let's suppose you have been given with the base address of a structure variable and asked to change the member element values what would you do*/

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

    printf("Before : data.data1 = %X\n",data.data1);//printed the value of data1 before changing the data

    struct dataSet *pData;//declares a pointer that enables you to work with struct dataSet variables dynamically

    pData = &data;

    pData->data1 = 0x55; //we have dereferenced the value present in data1 from 0x11 to 0x55;
    printf("After : data.data1 = %X\n", data.data1);

    getchar();

    return 0;

}