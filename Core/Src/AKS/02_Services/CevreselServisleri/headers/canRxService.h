/*
 * canRxService.h
 *
 *  Created on: May 11, 2026
 *      Author: Guray
 */

#ifndef SRC_AKS_02_SERVICES_CEVRESELSERVISLERI_HEADERS_CANRXSERVICE_H_
#define SRC_AKS_02_SERVICES_CEVRESELSERVISLERI_HEADERS_CANRXSERVICE_H_
#include "03_Interfaces/bsp_models.h"
#include <stdint.h>


void canMesajiIsle(uint32_t id,
                   uint8_t dlc,
                   uint8_t *data);

#endif /* SRC_AKS_02_SERVICES_CEVRESELSERVISLERI_HEADERS_CANRXSERVICE_H_ */
