#include "03_Interfaces/can_interface.h"
#include "headers/motorKontrolService.h"
#include "03_Interfaces/bsp_models.h"

void pedalGonder(uint8_t pedalOrani){
	BSP_HAL_ISLEM_DURUMU sonuc = BSP_canSendMessage(uint32_t id, uint8_t DLC, uint8_t *pData);


}


uint8_t pedalOrtalamasiAl(uint16_t (*pedalAdcVerisi)[PEDAL_BUFFER_SIZE]){
	uint32_t toplam = 0;
	for (uint16_t var = 0; var < PEDAL_BUFFER_SIZE; ++var) {
		toplam+=pedalAdcVerisi[var];
	}

	return toplam/PEDAL_BUFFER_SIZE;
}
