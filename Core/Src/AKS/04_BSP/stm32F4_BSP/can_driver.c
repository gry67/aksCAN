#include <bsp_bridge.h>

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

BSP_HAL_ISLEM_DURUMU BSP_canSetFilter(BSP_CAN_FILTRE *canFilter){
	canFiltre.FilterBank = canFilter->FilterBank;
	canFiltre.FilterActivation = canFilter->FilterActivation;
	canFiltre.FilterIdLow = canFilter->FilterIdLow;
	canFiltre.FilterIdHigh = canFilter->FilterIdHigh;
	canFiltre.FilterFIFOAssignment = canFilter->FilterFIFOAssignment;
	canFiltre.FilterMaskIdLow = canFilter->FilterMaskIdLow;
	canFiltre.FilterMaskIdHigh = canFilter->FilterMaskIdHigh;
	canFiltre.FilterMode = canFilter->FilterMode;
	canFiltre.FilterScale = canFilter->FilterScale;
	canFiltre.SlaveStartFilterBank = canFilter->SlaveStartFilterBank;

	HAL_StatusTypeDef halStatus = HAL_CAN_ConfigFilter(&hcan1, &canFiltre);

	return halStatusBspSwitch(halStatus);
}



