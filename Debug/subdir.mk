################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_UPPER_SRCS += \
../Iinstruction.C \
../Instruction.C \
../Jinstruction.C \
../Rinstruction.C \
../main.C \
../mdf.C \
../pipelineHandler.C 

OBJS += \
./Iinstruction.o \
./Instruction.o \
./Jinstruction.o \
./Rinstruction.o \
./main.o \
./mdf.o \
./pipelineHandler.o 

C_UPPER_DEPS += \
./Iinstruction.d \
./Instruction.d \
./Jinstruction.d \
./Rinstruction.d \
./main.d \
./mdf.d \
./pipelineHandler.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.C
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


