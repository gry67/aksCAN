#include "dmaRxService.h"

void pedalAdcBufferDolduCallback(uint16_t *pedalBuffer[PEDAL_BUFFER_SIZE]){

	uint8_t pedalOrtalamasi = pedalOrtalamasiAl(*pedalBuffer);
}


uint8_t pedalOrtalamasiAl(uint16_t (*pedalAdcVerisi)[PEDAL_BUFFER_SIZE]){
	uint32_t toplam = 0;
	for (uint16_t var = 0; var < PEDAL_BUFFER_SIZE; ++var) {
		toplam+=pedalAdcVerisi[var];
	}

	return toplam/PEDAL_BUFFER_SIZE;
}
