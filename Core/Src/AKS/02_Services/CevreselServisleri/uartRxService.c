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
			/* basarili*/
				break;
			}
		case 0x15:
			{
				/**basarisiz*/
				break;
			}
		default:
			break;

	}
}
