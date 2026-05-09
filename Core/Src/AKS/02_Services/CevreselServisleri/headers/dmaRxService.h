#include "dma_interface.h"
uint8_t pedalOrtalamasiAl(uint16_t (*pedalAdcVerisi)[32]);

void pedalAdcBufferDolduCallback(uint16_t *pedalBuffer[PEDAL_BUFFER_SIZE]);
