
typedef enum
{
  BSP_BASARILI ,
  BSP_HATA    ,
  BSP_MESGUL  ,
  BSP_ZAMANASIMI
} BSP_HAL_ISLEM_DURUMU;

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

void BSP_canSetFilter(BSP_CAN_FILTRE *canFilter);
