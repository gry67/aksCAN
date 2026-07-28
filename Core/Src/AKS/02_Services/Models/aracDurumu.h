/*
 * aracDurumu.h
 *
 *  Created on: May 9, 2026
 *      Author: Guray
 */
#include <stdint.h>

#ifndef SRC_AKS_02_SERVICES_ARAC_DURUMLARI_ARACDURUMU_H_
#define SRC_AKS_02_SERVICES_ARAC_DURUMLARI_ARACDURUMU_H_

/*motor sürücüden gelir*/
typedef struct{
	uint8_t motorHizi;
	uint8_t akim;
}motorSurucuDurumu;

/*Bu veriler bys'den gelir ve aks ekranında gözükmelidir.*/
typedef struct{
	uint8_t bataryaGerilimi;
	uint8_t minHucreGerilimi;
	uint8_t maxHucreGerilimi;
	uint8_t sarjDurumu;
	uint8_t bataryaAkimi;
	uint8_t bataryaSicakligi;
	uint8_t enSicakHucreSicakligi;
}bysDurumu;

extern volatile bysDurumu bys;
extern volatile motorSurucuDurumu motorSurucu;



#endif /* SRC_AKS_02_SERVICES_ARAC_DURUMLARI_ARACDURUMU_H_ */
