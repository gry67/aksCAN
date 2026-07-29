/*
 * uartRxService.c
 *
 *  Created on: May 9, 2026
 *      Author: Guray
 */

/*BİTMEDİ BİTİR BUNU UNUTMA PATLARIZ*/
#include "headers/uartRxService.h"

void telemetriGeriBildirimAlindi(uint8_t *mesaj){


	switch(*mesaj){
		case 0x06:
			{
				static uint8_t veri[] = "0x06 geldi";
				BSP_uartMesajGonder(veri, 10, 2);
			/* basarili*/
				break;
			}
		case 0x15:
			{
				/**basarisiz*/
				break;
			}
		default:
			static uint8_t veri[] = "\nbisey geldi ama anlamadim\n";

			BSP_uartMesajGonder(veri, sizeof(veri)-1, 2);
			break;

	}
}
