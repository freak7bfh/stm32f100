################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/delay.c \
../src/main.c \
../src/rcc.c \
../src/syscalls.c \
../src/system_stm32f10x.c \
../src/usart.c 

OBJS += \
./src/delay.o \
./src/main.o \
./src/rcc.o \
./src/syscalls.o \
./src/system_stm32f10x.o \
./src/usart.o 

C_DEPS += \
./src/delay.d \
./src/main.d \
./src/rcc.d \
./src/syscalls.d \
./src/system_stm32f10x.d \
./src/usart.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo %cd%
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -mfloat-abi=soft -DSTM32F100RCTx -DSTM32F1 -DSTM32 -DUSE_STDPERIPH_DRIVER -DSTM32F10X_HD_VL -I"C:/Users/freak/workspace/discovery2_stdperiph_lib" -I"C:/Users/freak/workspace/stm32f100rct6/inc" -I"C:/Users/freak/workspace/discovery2_stdperiph_lib/CMSIS/core" -I"C:/Users/freak/workspace/discovery2_stdperiph_lib/CMSIS/device" -I"C:/Users/freak/workspace/discovery2_stdperiph_lib/StdPeriph_Driver/inc" -O3 -Wall -fmessage-length=0 -ffunction-sections -c -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


