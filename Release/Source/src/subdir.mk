################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Source/src/DS_BinaryTree.c \
../Source/src/DS_Queue.c \
../Source/src/RandomGen.c 

OBJS += \
./Source/src/DS_BinaryTree.o \
./Source/src/DS_Queue.o \
./Source/src/RandomGen.o 

C_DEPS += \
./Source/src/DS_BinaryTree.d \
./Source/src/DS_Queue.d \
./Source/src/RandomGen.d 


# Each subdirectory must supply rules for building sources it contributes
Source/src/%.o: ../Source/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -I"/mnt/D032FB4732FB3158/Coding/EclipesWrkspace/DataStructures/Main/inc" -I"/mnt/D032FB4732FB3158/Coding/EclipesWrkspace/DataStructures/Source/inc" -I"/mnt/D032FB4732FB3158/Coding/EclipesWrkspace/DataStructures/TestApplication/inc" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


