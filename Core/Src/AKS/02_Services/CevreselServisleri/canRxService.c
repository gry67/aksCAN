#include "03_Interfaces/can_interface.h"
#include "03_Interfaces/canMesajlarıListe.h"
#include "02_Services/Models/aracDurumu.h"

void canMesajiIsle(uint32_t id, uint8_t dlc, uint8_t *data)
{
    switch(id)
    {
        /* ================= MOTOR ================= */

        case CAN_ID_MOTOR_SOL_HIZ:

            motorSurucu.motorHizi =
                    data[0];
        break;

        case CAN_ID_MOTOR_SOL_AKIM:
            motorSurucu.akim =
                    data[0];
        break;

        /* ================= BYS ================= */

        case CAN_ID_BYS_BATARYA_GERILIM:

            bys.bataryaGerilimi =
                    data[0];
        break;

        case CAN_ID_BYS_BATARYA_AKIM:

            bys.bataryaAkimi =
                    data[0];
        break;

        case CAN_ID_BYS_MAX_SICAKLIK:

            bys.enSicakHucreSicakligi =
                    data[0];
        break;

        case CAN_ID_BYS_SARJ_DURUMU:

            bys.sarjDurumu =
                    data[0];

        break;

        default:
        break;
    }
}
