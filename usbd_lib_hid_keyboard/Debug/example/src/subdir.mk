################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../example/src/cr_startup_lpc175x_6x.c \
../example/src/hid_desc.c \
../example/src/hid_keyboard.c \
../example/src/hid_main.c \
../example/src/ms_timer.c \
../example/src/sysinit.c 

OBJS += \
./example/src/cr_startup_lpc175x_6x.o \
./example/src/hid_desc.o \
./example/src/hid_keyboard.o \
./example/src/hid_main.o \
./example/src/ms_timer.o \
./example/src/sysinit.o 

C_DEPS += \
./example/src/cr_startup_lpc175x_6x.d \
./example/src/hid_desc.d \
./example/src/hid_keyboard.d \
./example/src/hid_main.d \
./example/src/ms_timer.d \
./example/src/sysinit.d 


# Each subdirectory must supply rules for building sources it contributes
example/src/%.o: ../example/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DDEBUG -D__CODE_RED -D__USE_LPCOPEN -DCORE_M3 -I"/home/rupinder/Documents/MCUXpresso_10.3.0_2200/workspace/lpc_chip_175x_6x/inc" -I"/home/rupinder/Documents/MCUXpresso_10.3.0_2200/workspace/lpc_board_nxp_lpcxpresso_1769/inc" -I"/home/rupinder/Documents/MCUXpresso_10.3.0_2200/workspace/usbd_lib_hid_keyboard/example/inc" -I"/home/rupinder/Documents/MCUXpresso_10.3.0_2200/workspace/lpc_chip_175x_6x/inc/usbd" -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


