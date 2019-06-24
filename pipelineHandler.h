/*
 * pipelineHandler.h
 *
 *  Created on: Jan 29, 2013
 *      Author: tomyogms
 */
#ifndef PIPELINEHANDLER_H_
#define PIPELINEHANDLER_H_

#include "defs.h"
#include "Instruction.h"

class PLHandler {

private:
	deque<Instruction> inst;
	deque<Instruction> pipeline;
	int cycleCount;
	bool IF, ID, EX, MEM, WB;

public:

	PLHandler();
	void insertInstruction(Instruction);
	Instruction popInstruction();
	int executePL();
	void fStage();
	void idStage();
	void exeStage();
	void memStage();
	void wbStage();
	void printSize();

};






#endif /* PIPELINEHANDLER_H_ */
