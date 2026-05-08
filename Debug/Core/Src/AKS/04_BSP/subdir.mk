################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/AKS/04_BSP/bsp_helper.c 

OBJS += \
./Core/Src/AKS/04_BSP/bsp_helper.o 

C_DEPS += \
./Core/Src/AKS/04_BSP/bsp_helper.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/AKS/04_BSP/%.o Core/Src/AKS/04_BSP/%.su Core/Src/AKS/04_BSP/%.cyclo: ../Core/Src/AKS/04_BSP/%.c Core/Src/AKS/04_BSP/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Core/Src/AKS -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-AKS-2f-04_BSP

clean-Core-2f-Src-2f-AKS-2f-04_BSP:
	-$(RM) ./Core/Src/AKS/04_BSP/bsp_helper.cyclo ./Core/Src/AKS/04_BSP/bsp_helper.d ./Core/Src/AKS/04_BSP/bsp_helper.o ./Core/Src/AKS/04_BSP/bsp_helper.su

.PHONY: clean-Core-2f-Src-2f-AKS-2f-04_BSP

