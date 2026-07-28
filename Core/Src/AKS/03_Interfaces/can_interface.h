#include "bsp_models.h"
#include <stdint.h>

typedef struct
{
  uint32_t FilterIdHigh;
  uint32_t FilterIdLow;
  uint32_t FilterMaskIdHigh;
  uint32_t FilterMaskIdLow;
  uint32_t FilterFIFOAssignment;
  uint32_t FilterBank;
  uint32_t FilterMode;
  uint32_t FilterScale;
  uint32_t FilterActivation;
  uint32_t SlaveStartFilterBank;

} BSP_CAN_FILTRE;




BSP_HAL_ISLEM_DURUMU BSP_canInıt();

BSP_HAL_ISLEM_DURUMU BSP_canSendMessage(uint32_t id, uint8_t DLC, uint8_t *pData);

BSP_HAL_ISLEM_DURUMU BSP_canSetFilter(BSP_CAN_FILTRE *bspFiltre);

uint32_t kacCanMesajiBirikti();
uint32_t kacKritikCanMesajiBirikti();
