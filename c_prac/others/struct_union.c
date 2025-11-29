#include <stdio.h>
#include <stdint.h>

struct flags{
    uint8_t power_on   :1;
    uint8_t error     :1;
    uint8_t tx_ready  :1;
    uint8_t rx_ready   :1;
    uint8_t Overheat   :1;
    uint8_t undervoltage :1;
    uint8_t timeout    :1;
    uint8_t Reserved   :1;
} status_flag_t;

union status {
    uint8_t status_reg_flag;
    struct flags status_flag_t;
};

void decode_status(uint8_t status_reg) {
   
 union status status_u ;
 status_u.status_reg_flag=status_reg;
     if(status_u.status_flag_t.power_on)
        printf("Power On\n");
    if(status_u.status_flag_t.error)
        printf("Error\n");
     if(status_u.status_flag_t.tx_ready)
        printf("Tx Ready\n");
     if(status_u.status_flag_t.rx_ready)
        printf("Rx Ready\n");
     if(status_u.status_flag_t.Overheat)
        printf("Overheat\n");
     if(status_u.status_flag_t.undervoltage)
        printf("Undervoltage\n");
     if(status_u.status_flag_t.timeout)
        printf("Timeout\n");
    if (status_u.status_flag_t.Reserved)
        printf("Reserved\n");

}


int main() {
    uint8_t reg;
    scanf("%hhu", &reg);
    decode_status(reg);
    return 0;
}