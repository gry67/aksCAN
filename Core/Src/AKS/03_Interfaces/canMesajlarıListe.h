/*
 * canMesajlarıListe.h
 *
 *  Created on: May 11, 2026
 *      Author: Guray
 */

#ifndef SRC_AKS_03_INTERFACES_CANMESAJLARILISTE_H_
#define SRC_AKS_03_INTERFACES_CANMESAJLARILISTE_H_


/* ================= ACİL DURUM ================= */

#define CAN_ID_AKS_ACIL_DURUM            0x001


/* ================= MOTOR SÜRÜCÜLER ================= */

#define CAN_ID_MOTOR_SOL_HIZ             0x101
#define CAN_ID_MOTOR_SAG_HIZ             0x102

#define CAN_ID_MOTOR_SOL_AKIM            0x103
#define CAN_ID_MOTOR_SAG_AKIM            0x104

#define CAN_ID_MOTOR_SOL_ERROR           0x105
#define CAN_ID_MOTOR_SAG_ERROR           0x106


/* ================= BYS ================= */

#define CAN_ID_BYS_MAX_SICAKLIK          0x201
#define CAN_ID_BYS_BATARYA_AKIM          0x202
#define CAN_ID_BYS_BATARYA_GERILIM       0x203
#define CAN_ID_BYS_KALAN_ENERJI          0x204
#define CAN_ID_BYS_SARJ_DURUMU           0x205
#define CAN_ID_BYS_TAM_SARJ_SURESI       0x206
#define CAN_ID_BYS_ERROR                 0x207


/* ================= AKS ÇIKIŞ MESAJLARI ================= */

#define CAN_ID_AKS_PEDAL_YUZDESI         0x301
#define CAN_ID_AKS_DIREKSIYON_ACISI      0x302

#define CAN_ID_AKS_SOL_TORK_REFERANSI    0x303
#define CAN_ID_AKS_SAG_TORK_REFERANSI    0x304





#endif /* SRC_AKS_03_INTERFACES_CANMESAJLARILISTE_H_ */
