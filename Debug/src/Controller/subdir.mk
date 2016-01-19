################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Controller/SecondController.cpp \
../src/Controller/SecondRunner.cpp 

OBJS += \
./src/Controller/SecondController.o \
./src/Controller/SecondRunner.o 

CPP_DEPS += \
./src/Controller/SecondController.d \
./src/Controller/SecondRunner.d 


# Each subdirectory must supply rules for building sources it contributes
src/Controller/%.o: ../src/Controller/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


