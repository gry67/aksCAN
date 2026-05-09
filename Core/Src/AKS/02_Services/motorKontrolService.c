#include "03_Interfaces/can_interface.h"

void pedalGonder(uint8_t pedalOrani){
	BSP_HAL_ISLEM_DURUMU sonuc = BSP_canSendMessage(uint32_t id, uint8_t DLC, uint8_t *pData);


}
