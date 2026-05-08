################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/AKS/01_App/app.c 

OBJS += \
./Core/Src/AKS/01_App/app.o 

C_DEPS += \
./Core/Src/AKS/01_App/app.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/AKS/01_App/%.o Core/Src/AKS/01_App/%.su Core/Src/AKS/01_App/%.cyclo: ../Core/Src/AKS/01_App/%.c Core/Src/AKS/01_App/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Core/Src/AKS -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-AKS-2f-01_App

clean-Core-2f-Src-2f-AKS-2f-01_App:
	-$(RM) ./Core/Src/AKS/01_App/app.cyclo ./Core/Src/AKS/01_App/app.d ./Core/Src/AKS/01_App/app.o ./Core/Src/AKS/01_App/app.su

.PHONY: clean-Core-2f-Src-2f-AKS-2f-01_App

