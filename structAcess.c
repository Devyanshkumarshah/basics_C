#include<stdInt.h>
#include<stdio.h>

struct carModal
{
    uint32_t carNum;
    uint32_t carPrice;
    uint32_t carMaxSpeed;
    float height;

};


int main(void)
{
    struct carModal carBMW = {2021 , 15000, 220, 1330};
    struct carModal carFord = {4031, 35000, 160, 1900.36};


    printf("Details of car BMW is as follows\n");
    printf("carNumber = %u\n", carBMW.carNum);
    printf("car Price = %u\n", carBMW.carPrice);
    printf("car Max Speed = %u\n", carBMW.carMaxSpeed);
    printf("Height of the car = %f\n", carBMW.height);


    printf("Details of car Ford are as follows\n");
    printf("carNumber = %u\n", carFord.carNum);
    printf("car Price = %u", carFord.carPrice);
    printf("Car Maximum Speed = %u\n", carFord.carMaxSpeed);
    printf("Height of the car = %f", carFord.height);
    return 0;
}