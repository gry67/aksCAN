#include "headers/dmaRxService.h"



void pedalAdcBufferDolduCallback(uint16_t pedalBuffer[PEDAL_BUFFER_SIZE]){

	uint16_t pedalOrtalamasi = pedalOrtalamasiAl(pedalBuffer);
}

