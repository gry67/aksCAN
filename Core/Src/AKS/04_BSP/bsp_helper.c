#include "04_BSP/stm32F4_BSP/bsp_bridge.h"
#include "platform_hal.h"

BSP_HAL_ISLEM_DURUMU halStatusBspSwitch(HAL_StatusTypeDef halStatus){
	switch (halStatus) {
		case HAL_OK:
			return BSP_BASARILI;

		case HAL_ERROR:
					return BSP_HATA;

		case HAL_BUSY:
					return BSP_MESGUL;

		case HAL_TIMEOUT:
					return BSP_ZAMANASIMI;

		default:
			break;
	};
	return BSP_HATA;
}
