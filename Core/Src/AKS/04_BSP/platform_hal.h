#pragma once


/* Hangi plaftorm kullanılacaksa onu yaz örn: BSP_STM32F1*/
#define BSP_STM32F4



#if defined(BSP_STM32F4)
    #include "stm32f4xx_hal.h"
#elif defined(BSP_STM32F1)
    #include "stm32f1xx_hal.h"
#else
    #error Unsupported platform
#endif
