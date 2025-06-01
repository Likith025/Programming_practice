/*
 * Question:
 * Write a program to decode a given 32-bit packet information and print the values
 * of different fields. Create a structure with member elements as packet fields as shown below:
 *
 * [Bits]
 * | 1 |    2    |     8     |   3   |  3  |     12    |   3   |  2  |
 * |ADDR_MODE|SHORT_ADDR|LONG_ADDR|SENSOR|BAT| PAYLOAD |STATUS| CRC |
 *
 * Define a structure named 'Packet' with the following members:
 * - addrMode   : 1 bit
 * - shortAddr  : 2 bits
 * - longAddr   : 8 bits
 * - sensor     : 3 bits
 * - bat        : 3 bits
 * - payload    : 12 bits
 * - status     : 1 bits
 * - crc        : 2 bits
 */



 #include <stdio.h>
 #include <stdint.h>

struct Packet{
    uint8_t addrMode;
    uint8_t shortAddr;
    uint8_t longAddr;
    uint8_t sensor;
    uint8_t bat;
    uint16_t payload;
    uint8_t status;
    uint8_t crc;

};


struct Packet_2{
    uint32_t addrMode   :1;
    uint32_t shortAddr  :2;
    uint32_t longAddr   :8;
    uint32_t sensor :3;
    uint32_t bat    :3;
    uint32_t payload    :12;
    uint32_t status :1;
    uint32_t crc    :2;

};

void data_parse(uint32_t pack){
    struct Packet p1;
    p1.addrMode  = (pack >> 31) & 0x1;
    p1.shortAddr = (pack >> 29) & 0x3;
    p1.longAddr  = (pack >> 21) & 0xFF;
    p1.sensor    = (pack >> 18) & 0x7;
    p1.bat       = (pack >> 15) & 0x7;
    p1.payload   = (pack >> 3)  & 0xFFF;
    p1.status    = (pack >> 2)  & 0x1;
    p1.crc       = (pack >> 0)  & 0x3;

    printf("%x\t", p1.addrMode);
    printf("%x\t", p1.shortAddr);
    printf("%x\t", p1.longAddr);
    printf("%x\t", p1.sensor);
    printf("%x\t", p1.bat);
    printf("%x\t", p1.payload);
    printf("%x\t", p1.status);
    printf("%x\t", p1.crc);
    printf("\n size of normal struct %d \n",sizeof(p1));
}



void data_parse_2(uint32_t pack){
    struct Packet_2 p1;
    p1.addrMode  = (pack >> 31) & 0x1;
    p1.shortAddr = (pack >> 29) & 0x3;
    p1.longAddr  = (pack >> 21) & 0xFF;
    p1.sensor    = (pack >> 18) & 0x7;
    p1.bat       = (pack >> 15) & 0x7;
    p1.payload   = (pack >> 3)  & 0xFFF;
    p1.status    = (pack >> 2)  & 0x1;
    p1.crc       = (pack >> 0)  & 0x3;

    printf("%x\t", p1.addrMode);
    printf("%x\t", p1.shortAddr);
    printf("%x\t", p1.longAddr);
    printf("%x\t", p1.sensor);
    printf("%x\t", p1.bat);
    printf("%x\t", p1.payload);
    printf("%x\t", p1.status);
    printf("%x\t", p1.crc);

    printf("\n size of bitfield struct %d \n",sizeof(p1));
}




 int main(){
    uint32_t incomming_pack;
    printf("enter the 32 bit pack \n");
    scanf("%x",&incomming_pack);
    printf("parsing with normal struct\n");
    data_parse(incomming_pack);
    printf("parsing with bitfield struct\n");
    data_parse_2(incomming_pack);

 }