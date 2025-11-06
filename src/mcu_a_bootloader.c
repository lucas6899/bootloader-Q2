// src/mcu_a_bootloader.c

#include "boot_spi_proto.h"

int main(void)
{
    // init RS485 (Modbus) and SPI
    while (1) {
        // 1. wait Modbus frame from host
        // 2. parse to bootloader command
        // 3. if target == MCU_A -> handle local flash
        // 4. if target == MCU_B -> pack to SPI frame and send, wait ACK
        // 5. send result back to host
    }
    return 0;
}
