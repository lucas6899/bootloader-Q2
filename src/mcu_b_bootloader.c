// src/mcu_b_bootloader.c

#include "boot_spi_proto.h"

int main(void)
{
    // init SPI slave
    while (1) {
        // 1. wait spi frame
        // 2. check crc
        // 3. switch(cmd) { ERASE / WRITE / VERIFY / RUN }
        // 4. send ack/nack back
    }
    return 0;
}
