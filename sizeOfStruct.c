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
    printf("size of struct carModal is %lu\n", sizeof(carBMW));  // or we can also write "carModal" instead of "struct carBMW"
    getchar();

    return 0;
}