#include "bsp_bridge.h"
#include "03_Interfaces/uart_interface.h"
#include <usart.h>



static volatile bool uart2Busy = false;
static volatile bool uart1Busy = false;

static volatile uint8_t telemetriGeriBildirimi = 0;

/* EKRAN UART1 VE RX'İ KAPALI */
/*TELEMETRİ UART2 ÜZERİNDEN GİDECEK 1 BYTE'LIK VERİ ULAŞTI ULAŞMADI VERİSİ GERİ DÖNECEK*/
/* AYRIMI UNUTMA*/

BSP_HAL_ISLEM_DURUMU BSP_uartBaslat(){

	HAL_StatusTypeDef sonuc = HAL_UART_Receive_IT(&huart2, &telemetriGeriBildirimi, 1);
	return halStatusBspSwitch(sonuc);
}




BSP_HAL_ISLEM_DURUMU BSP_uartMesajGonder(uint8_t *veri, uint16_t boyut, uint8_t hangiUart){

	switch (hangiUart) {
		case 1:
			{if (uart1Busy) {
				return BSP_MESGUL;
			}

			uart1Busy = true;

			HAL_StatusTypeDef sonuc = HAL_UART_Transmit_DMA(&huart1, veri, boyut);
			if(sonuc != HAL_OK)
			{
				uart1Busy = false;
			}

			return halStatusBspSwitch(sonuc);
			}

		case 2:
			{if (uart2Busy) {
					return BSP_MESGUL;
			}

			uart2Busy = true;
			HAL_StatusTypeDef sonuc = HAL_UART_Transmit_DMA(&huart2, veri, boyut);
			if(sonuc != HAL_OK)
			{
			    uart2Busy = false;
			}
			return halStatusBspSwitch(sonuc);
			}
		default:
			return BSP_HATA;

	}

}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart){

	if (huart == &huart2) {

		telemetriGeriBildirimAlindi(telemetriGeriBildirimi);
		HAL_UART_Receive_IT(huart, &telemetriGeriBildirimi, 1);
	}
}



void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart){
	if (huart==&huart2) {
		uart2Busy = false;

	}else if (huart == &huart1) {
		uart1Busy = false;
	}
}








/*
BSP_HAL_ISLEM_DURUMU uartKesmeMesajGonder(uint8_t *veri, uint16_t boyut){

	HAL_StatusTypeDef sonuc = HAL_UART_Transmit_IT(&huart2, veri, boyut);


	halStatusBspSwitch(sonuc);
}
*/

/*
BSP_HAL_ISLEM_DURUMU uartMesajGonder(uint8_t *veri, uint16_t boyut){

	HAL_StatusTypeDef sonuc = HAL_UART_Transmit(&huart2, veri , boyut, HAL_MAX_DELAY);
	return halStatusBspSwitch(sonuc);
}
*/

