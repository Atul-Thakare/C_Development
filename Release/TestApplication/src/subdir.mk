################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../TestApplication/src/TestApp_Queue.c 

OBJS += \
./TestApplication/src/TestApp_Queue.o 

C_DEPS += \
./TestApplication/src/TestApp_Queue.d 


# Each subdirectory must supply rules for building sources it contributes
TestApplication/src/%.o: ../TestApplication/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -I"/mnt/D032FB4732FB3158/Coding/EclipesWrkspace/DataStructures/Main/inc" -I"/mnt/D032FB4732FB3158/Coding/EclipesWrkspace/DataStructures/Source/inc" -I"/mnt/D032FB4732FB3158/Coding/EclipesWrkspace/DataStructures/TestApplication/inc" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


