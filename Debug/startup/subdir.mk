################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../startup/startup_stm32.s 

OBJS += \
./startup/startup_stm32.o 


# Each subdirectory must supply rules for building sources it contributes
startup/%.o: ../startup/%.s
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Assembler'
	@echo %cd%
	arm-none-eabi-as -mcpu=cortex-m3 -mthumb -mfloat-abi=soft -I"C:/Users/freak/workspace/discovery2_stdperiph_lib" -I"C:/Users/freak/workspace/stm32f100rct6/inc" -I"C:/Users/freak/workspace/discovery2_stdperiph_lib/CMSIS/core" -I"C:/Users/freak/workspace/discovery2_stdperiph_lib/CMSIS/device" -I"C:/Users/freak/workspace/discovery2_stdperiph_lib/StdPeriph_Driver/inc" -g -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


