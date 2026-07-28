#include "bsp_bridge.h"
#include "03_Interfaces/can_interface.h"
#include <can.h>

BSP_HAL_ISLEM_DURUMU BSP_canInıt(){
	BSP_CAN_FILTRE canFiltre;

	canFiltre.FilterBank = 0;
	canFiltre.FilterActivation = ENABLE;
	canFiltre.FilterIdLow = 0;
	canFiltre.FilterIdHigh = 0x7FF << 5;
	canFiltre.FilterFIFOAssignment = CAN_FILTER_FIFO0;
	canFiltre.FilterMaskIdLow = 0;
	canFiltre.FilterMaskIdHigh = 0x7ff<<5;
	canFiltre.FilterMode = CAN_FILTERMODE_IDMASK;
	canFiltre.FilterScale = CAN_FILTERSCALE_32BIT;
	canFiltre.SlaveStartFilterBank = 1;

	BSP_canSetFilter(&canFiltre);

	HAL_StatusTypeDef halStatus = HAL_CAN_Start(&hcan1);
	return halStatusBspSwitch(halStatus);
}

BSP_HAL_ISLEM_DURUMU BSP_canSendMessage(uint32_t id, uint8_t DLC, uint8_t *pData){
	CAN_TxHeaderTypeDef TxHeader;
	uint32_t TxMailbox;

	TxHeader.IDE = CAN_ID_STD;
	TxHeader.StdId = id;
	TxHeader.RTR = CAN_RTR_DATA;
	TxHeader.DLC = DLC;
	HAL_StatusTypeDef halStatus = HAL_CAN_AddTxMessage(&hcan1, &TxHeader, pData, &TxMailbox);
	return halStatusBspSwitch(halStatus);
}

BSP_HAL_ISLEM_DURUMU BSP_canSetFilter(BSP_CAN_FILTRE *bspFiltre){
	CAN_FilterTypeDef canFiltre;

	canFiltre.FilterBank = bspFiltre->FilterBank;
	canFiltre.FilterActivation = bspFiltre->FilterActivation;
	canFiltre.FilterIdLow = bspFiltre->FilterIdLow;
	canFiltre.FilterIdHigh = bspFiltre->FilterIdHigh;
	canFiltre.FilterFIFOAssignment = bspFiltre->FilterFIFOAssignment;
	canFiltre.FilterMaskIdLow = bspFiltre->FilterMaskIdLow;
	canFiltre.FilterMaskIdHigh = bspFiltre->FilterMaskIdHigh;
	canFiltre.FilterMode = bspFiltre->FilterMode;
	canFiltre.FilterScale = bspFiltre->FilterScale;
	canFiltre.SlaveStartFilterBank = bspFiltre->SlaveStartFilterBank;
	HAL_StatusTypeDef halStatus = HAL_CAN_ConfigFilter(&hcan1, &canFiltre);
	return halStatusBspSwitch(halStatus);
}


uint32_t kacCanMesajiBirikti(){
	return HAL_CAN_GetRxFifoFillLevel(&hcan1, CAN_RX_FIFO0);
}

uint32_t kacKritikCanMesajiBirikti(){
	return HAL_CAN_GetRxFifoFillLevel(&hcan1, CAN_RX_FIFO1);
}



void HAL_CAN_RxFifo0MsgPendingCallback(CAN_HandleTypeDef *hcan)
{
    CAN_RxHeaderTypeDef rxHeader;
    uint8_t rxData[8];

    HAL_CAN_GetRxMessage(hcan,
                         CAN_RX_FIFO0,
                         &rxHeader,
                         rxData);

    canMesajiIsle(rxHeader.StdId,
                  rxHeader.DLC,
                  rxData);
}

void HAL_CAN_RxFifo1MsgPendingCallback(CAN_HandleTypeDef *hcan)
{
    CAN_RxHeaderTypeDef rxHeader;
    uint8_t rxData[8];

    HAL_CAN_GetRxMessage(hcan,
                         CAN_RX_FIFO1,
                         &rxHeader,
                         rxData);

    canMesajiIsle(rxHeader.StdId,
                  rxHeader.DLC,
                  rxData);
}

