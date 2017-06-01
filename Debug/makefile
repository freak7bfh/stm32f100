################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include startup/subdir.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: stm32f100rct6.elf

dependents:
	-cd C:/Users/freak/workspace/discovery2_stdperiph_lib/Debug && $(MAKE) all

# Tool invocations
stm32f100rct6.elf: $(OBJS) $(USER_OBJS) C:/Users/freak/workspace/discovery2_stdperiph_lib/Debug/libdiscovery2_stdperiph_lib.a
	@echo 'Building target: $@'
	@echo 'Invoking: MCU GCC Linker'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -mfloat-abi=soft -L"C:\Users\freak\workspace\discovery2_stdperiph_lib\Debug" -T"C:\Users\freak\workspace\stm32f100rct6\LinkerScript.ld" -Wl,-Map=output.map -Wl,--gc-sections -lm -o "stm32f100rct6.elf" @"objects.list" $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

post-build:
	-@echo 'Generating binary and Printing size information:'
	arm-none-eabi-objcopy -O ihex "stm32f100rct6.elf" "stm32f100rct6.hex"
	arm-none-eabi-size "stm32f100rct6.elf"
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: post-build
C:/Users/freak/workspace/discovery2_stdperiph_lib/Debug/libdiscovery2_stdperiph_lib.a:

-include ../makefile.targets
