#include "03_Interfaces/dma_interface.h"
#include "dmaRxService.h"

uint16_t pedalBuffer[PEDAL_BUFFER_SIZE];



void dmalariBaslat(){

	/*gaz pedalı adc'si içindir.*/
	HAL_ADC_Start_DMA(&hadc1, (uint32_t*)pedalBuffer, PEDAL_BUFFER_SIZE);
}


void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef *hadc)
{

	pedalAdcBufferDolduCallback(*pedalBuffer);

  UNUSED(hadc);
}

