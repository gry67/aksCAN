#include "03_Interfaces/dma_interface.h"
#include <dma.h>
#include <adc.h>
#include "bsp_bridge.h"



uint16_t pedalBuffer[PEDAL_BUFFER_SIZE];

void BSP_dmalariBaslat(){

	/*gaz pedalı adc'si içindir.*/
	HAL_ADC_Start_DMA(&hadc1, (uint32_t*)pedalBuffer, PEDAL_BUFFER_SIZE);
}


void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef *hadc)
{

	pedalAdcBufferDolduCallback(pedalBuffer);

  UNUSED(hadc);
}





float pedalVerisiniFiltrele(uint16_t* pedalBuffer)
{
    uint32_t toplam = 0;
    for(int i = 0; i < PEDAL_BUFFER_SIZE; i++)
    {
        toplam += pedalBuffer[i];
    }
    float ortalamaAdc = (float)toplam / PEDAL_BUFFER_SIZE;

    static float filteredPedal = 0.0f;

    filteredPedal = (0.1f * ortalamaAdc) + (0.9f * filteredPedal);

    return (filteredPedal / 4095.0f) * 100.0f;
}

