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
 * 
 * using a combination of union and struct
 */



 #include <stdio.h>
 #include <stdint.h>

union pack{
    uint32_t packet;

struct {
        uint32_t crc   :2;
        uint32_t status  :1;
        uint32_t payload   :12;
        uint32_t bat    :3;
        uint32_t sensor    :3;
        uint32_t longAddr    :8;
        uint32_t shortAddr :2;
        uint32_t addrMode    :1;
    }packet_fields;
};


    void data_parse(uint32_t incomming){
    union pack pack;
    pack.packet=incomming;
    printf("%x\t", pack.packet_fields.addrMode);
    printf("%x\t", pack.packet_fields.shortAddr);
    printf("%x\t", pack.packet_fields.longAddr);
    printf("%x\t", pack.packet_fields.sensor);
    printf("%x\t", pack.packet_fields.bat);
    printf("%x\t", pack.packet_fields.payload);
    printf("%x\t", pack.packet_fields.status);
    printf("%x\t", pack.packet_fields.crc);

    printf("\n size of bitfield struct %d \n",sizeof(pack));
}




 int main(){
    uint32_t incomming_pack;
    printf("enter the 32 bit pack \n");
    scanf("%x",&incomming_pack);
    printf("parsing with normal struct\n");
    data_parse(incomming_pack);
    

 }