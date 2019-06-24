/*
 * pipelineHandler.C
 *
 *  Created on: Feb 5, 2013
 *      Author: tomyogms
 */
#include "pipelineHandler.h"

PLHandler::PLHandler(){
	IF = ID = EX = MEM = WB = false;
}


void PLHandler::insertInstruction(Instruction in){
	inst.push_back(in);
}

Instruction PLHandler::popInstruction(){
	Instruction& in = inst.front();
	inst.pop_front();
	return in;
}

void PLHandler::printSize(){
	cout<<"The size of the instruction queue is: "<< inst.size()<<endl;
}

void PLHandler::fStage(){
	//Instruction& temp = pipeline.front();
	Instruction& temp = pipeline.at(0);
	cout<<"IF: "<<temp.get_opcode()<<endl;
	cycleCount++;
	//pipeline.assign(2,temp);

}

void PLHandler::idStage(){
//	if (pipeline.at(2))
//		cout<<"test"<<endl;
	Instruction& temp = pipeline.at(1);
	//cout<<"ID: "<<temp.get_opcode()<<endl;
	//cycleCount++;
	//pipeline.assign(3,pipeline.at(1));

}

int PLHandler::executePL(){
	Instruction aux;
	while (!inst.empty()){
		if (pipeline.size()<=5){
			aux = popInstruction();
			aux.set_PLStage(0);
			//cout<<"OPCODE: "<< aux.get_opcode()<<endl;
			pipeline.push_back(aux);
			//pipeline.assign(1,aux);
			fStage();
			idStage();
		}
	}
	return 0;
}
