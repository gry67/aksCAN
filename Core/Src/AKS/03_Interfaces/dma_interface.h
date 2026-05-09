#include "stm32f4xx_hal.h"
#include "adc.h"
#include "usart.h"

#define PEDAL_BUFFER_SIZE 32

extern uint16_t pedalBuffer[PEDAL_BUFFER_SIZE];
void dmalariBaslat(); /*gaz pedalı adc'sini başlatır*/

