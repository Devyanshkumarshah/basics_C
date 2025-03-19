/*here we will try to minimise data consumption as compare to excersie 1 using "Bit Fields"
  Bit Field - Special type of featur in C and C++ to minimize the data usage by any structure just like specifing the data for int like "uint8_t"*/

/*wap to decode a given 32 bit of packet information and print the values of different fields. Creat a structure with member elements 
as packet fields as shown below.
| addrrMode | shortAddr | longAddr | sensor | bat | payload | status | crc |
|    1bit   |    2bit   |     8bit |  3bit  | 3bit|   12bit |  1bit  | 2bit|            //memoery taken by the packets.
<----------------------------------32Bits----------------------------------->

  bassicaly be have to segrigate and write the values of the designated packets.  
*/

#include<stdint.h>
#include<stdio.h>

struct Packet
{
    uint32_t crc       : 2;  //here we have designated a 32 bit of memo to the whole structure and assigned 2 bit of memo to the crc.
    uint32_t status    : 1; // next to crc another 1 bit fo data is being designated to the status packet 
    uint32_t payload   : 12; // same of all the below all variables
    uint32_t bat       : 3;
    uint32_t sensor    : 3;
    uint32_t longAddr  : 8;
    uint32_t shortAddr : 2;
    uint32_t addrrMode : 1;

};

int main(void)
{
    uint32_t packetValue;
    printf("Enter the 32bit packet vlaue: ");//user is asked to enter the 32 bit of data which is stored in packetVlaue.
    scanf("%X", &packetValue); 

    struct Packet packet; // created a "packet" variable whose type is of "struct Packet"

    packet.crc = (uint8_t)(packetValue & 0x3);//this will zero out all the numbers except last 2 bit as "3 = 11"in binary.this will left us a crc.
                  
    packet.status = (uint8_t)((packetValue >> 2) & 0x1);//desired number is shifted to least significant position and then it is being & with 0x1. 
                                             //performing & with 0x1 will remove all the data except bit 1.
    
    packet.payload = (uint16_t)((packetValue>>3) & 0xFFF);//payload starts after 3rd bit so it is shifted by 3 and the "&" is done in order to extract the 12 bit of data present in payload.
    packet.bat = (uint8_t)((packetValue>>15) & 0x7);//bat starts after 15th bit so it is being shifted and after that "&" is done to extract 3 bit of data.
    packet.sensor = (uint8_t)((packetValue>>18) & 0x7);
    packet.longAddr = (uint8_t)((packetValue>>21) & 0xFF);
    packet.shortAddr = (uint8_t)((packetValue>>29) & 0x3);
    packet.addrrMode = (uint8_t)((packetValue>>31) & 0x1);

    printf("CRC          :%X\n",packet.crc);
    printf("Status       :%X\n",packet.status);
    printf("payLoad      :%X\n",packet.payload);
    printf("Bat          :%X\n", packet.bat);
    printf("Sensor       :%X\n",packet.sensor);
    printf("Long Address :%X\n", packet.longAddr);
    printf("short Address:%X\n", packet.shortAddr);
    printf("addr Mode    :%X\n", packet.addrrMode);

    while(getchar() != '\n');
    getchar();

    printf(" Total memory consumed by the struct variable  = %lu\n", sizeof(struct Packet));
    //here we have consumed only 4 bytes of data 
}

//in this excersise i was able to learn about bit field and ho it is being to used for writting an efficient code.

//in networking activitis bit field is being heavily used.

