################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/AKS/04_BSP/stm32F4_BSP/can_driver.c \
../Core/Src/AKS/04_BSP/stm32F4_BSP/uart_driver.c 

OBJS += \
./Core/Src/AKS/04_BSP/stm32F4_BSP/can_driver.o \
./Core/Src/AKS/04_BSP/stm32F4_BSP/uart_driver.o 

C_DEPS += \
./Core/Src/AKS/04_BSP/stm32F4_BSP/can_driver.d \
./Core/Src/AKS/04_BSP/stm32F4_BSP/uart_driver.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/AKS/04_BSP/stm32F4_BSP/%.o Core/Src/AKS/04_BSP/stm32F4_BSP/%.su Core/Src/AKS/04_BSP/stm32F4_BSP/%.cyclo: ../Core/Src/AKS/04_BSP/stm32F4_BSP/%.c Core/Src/AKS/04_BSP/stm32F4_BSP/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Core/Src/AKS -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-AKS-2f-04_BSP-2f-stm32F4_BSP

clean-Core-2f-Src-2f-AKS-2f-04_BSP-2f-stm32F4_BSP:
	-$(RM) ./Core/Src/AKS/04_BSP/stm32F4_BSP/can_driver.cyclo ./Core/Src/AKS/04_BSP/stm32F4_BSP/can_driver.d ./Core/Src/AKS/04_BSP/stm32F4_BSP/can_driver.o ./Core/Src/AKS/04_BSP/stm32F4_BSP/can_driver.su ./Core/Src/AKS/04_BSP/stm32F4_BSP/uart_driver.cyclo ./Core/Src/AKS/04_BSP/stm32F4_BSP/uart_driver.d ./Core/Src/AKS/04_BSP/stm32F4_BSP/uart_driver.o ./Core/Src/AKS/04_BSP/stm32F4_BSP/uart_driver.su

.PHONY: clean-Core-2f-Src-2f-AKS-2f-04_BSP-2f-stm32F4_BSP

