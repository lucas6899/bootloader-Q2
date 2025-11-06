// inc/boot_spi_proto.h
#ifndef BOOT_SPI_PROTO_H
#define BOOT_SPI_PROTO_H

#include <stdint.h>

#pragma pack(push, 1)
typedef struct {
    uint8_t  sof;      // 0xAA
    uint8_t  cmd;      // 0x01=ENTER, 0x02=ERASE, 0x03=WRITE, ...
    uint16_t seq;      // sequence
    uint32_t addr;     // flash address
    uint16_t len;      // payload length
    // uint8_t payload[len];
    // uint16_t crc16;
} spi_bl_frame_t;

typedef struct {
    uint8_t  sof;     // 0xAB
    uint8_t  cmd;     // ack/nack
    uint16_t seq;
    uint8_t  status;  // 0=OK
    uint16_t crc16;
} spi_bl_resp_t;
#pragma pack(pop)

#endif
