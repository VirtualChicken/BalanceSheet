################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Balance.cpp \
../src/SheetItem.cpp \
../src/main.cpp 

OBJS += \
./src/Balance.o \
./src/SheetItem.o \
./src/main.o 

CPP_DEPS += \
./src/Balance.d \
./src/SheetItem.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/f3r0x/workspace/BalanceSheet/include" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


