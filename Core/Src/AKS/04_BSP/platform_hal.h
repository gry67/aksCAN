#pragma once


/* Hangi plaftorm kullanılacaksa onu yaz örn: BSP_STM32F1*/
#define BSP_STM32F4



#if defined(BSP_STM32F4)
    #include "stm32f4xx_hal_def.h"
#elif defined(BSP_STM32F1)
    #include "stm32f1xx_hal_def.h"
#else
    #error Unsupported platform
#endif
