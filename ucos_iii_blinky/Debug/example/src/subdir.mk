################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../example/src/cr_ucos_iii_startup_lpc17xx40xx.c \
../example/src/sysinit.c \
../example/src/ucos_iii_blinky.c 

OBJS += \
./example/src/cr_ucos_iii_startup_lpc17xx40xx.o \
./example/src/sysinit.o \
./example/src/ucos_iii_blinky.o 

C_DEPS += \
./example/src/cr_ucos_iii_startup_lpc17xx40xx.d \
./example/src/sysinit.d \
./example/src/ucos_iii_blinky.d 


# Each subdirectory must supply rules for building sources it contributes
example/src/%.o: ../example/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DDEBUG -D__CODE_RED -D__USE_LPCOPEN -DCORE_M3 -I"/home/rupinder/Documents/MCUXpresso_10.3.0_2200/workspace/lpc_chip_175x_6x/inc" -I"/home/rupinder/Documents/MCUXpresso_10.3.0_2200/workspace/lpc_board_nxp_lpcxpresso_1769/inc" -I"/home/rupinder/Documents/MCUXpresso_10.3.0_2200/workspace/ucos_iii_blinky/example/inc" -I"/home/rupinder/Documents/MCUXpresso_10.3.0_2200/workspace/ucos_iii_blinky/ucos_iii/inc" -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


