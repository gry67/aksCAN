
/*Bu veriler bys'den gelir ve aks ekranında gözükmelidir.*/
typedef struct{
	uint8_t bataryaGerilimi;
	uint8_t minHucreGerilimi;
	uint8_t maxHucreGerilimi;
	uint8_t sarjDurumu;
	uint8_t bataryaAkimi;
	uint8_t bataryaSicakligi;
}bysTelemetri;

extern volatile bysTelemetri bys;

typedef struct{
	uint8_t enSicakHucreSicakligi;
}bysEnSicakHucre;

extern volatile bysEnSicakHucre enSicakHucre;
