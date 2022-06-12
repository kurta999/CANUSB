#ifndef CIRCBUFF_H_
#define CIRCBUFF_H_

#include <inttypes.h>

typedef uint16_t circbuffsize_t;

#pragma pack(4)
typedef struct  
{
  uint8_t* buff_ptr;  /**< Pointer for a buffer which used as circular buffer */
  uint8_t* end_ptr;  /**< Circular buffer's end pointer */
  uint8_t* head_ptr;  /**< Circular buffer's head pointer */
  uint8_t* tail_ptr;  /**< Circular buffer's tail pointer */
} circbuff_t;  /**< Circular buffer structure */
#pragma pack()

void circbuff_init(circbuff_t* cb, uint8_t* buff_ptr, circbuffsize_t size);
uint8_t circbuff_add_byte(circbuff_t* cb, uint8_t b);
uint8_t circbuff_get_byte(circbuff_t* cb, uint8_t* b);

#endif /* CIRCBUFF_H_ */

