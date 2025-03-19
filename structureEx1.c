/*wap to decode a given 32 bit of packet information and print the values of different fields. Creat a structure with member elements 
as packet fields as shown below.
| addrrMode | shortAddr | longAddr | sensor | bat | payload | status | crc |
    1bit        2bit        8bit       3bit   3bit   12bit     1bit    2bit  //memoery taken by the packets.

  bassicaly be have to segrigate and write the values of the designated packets along with value.  
*/

#include<stdint.h>
#include<stdio.h>

struct Packet
{
    uint8_t crc;
    uint8_t status;
    uint16_t payload; //since payload is of 12 bits so we have to take 16 bit of int.
    uint8_t bat;
    uint8_t sensor;
    uint8_t longAddr;
    uint8_t shortAddr;
    uint8_t addrrMode;

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
    //to store a 32 bit of data we are consumming 10 bytes of data 6 byte of data is being waisted.
}

//through this excersie i was able to perform bit manupulation and got to know about the data.
//in the next excersie will be implementing a progran which will use less amount of data as compared to here.
