/*
 * Instruction.C
 *
 *  Created on: Feb 1, 2013
 *      Author: tomyogms
 */

#include "Instruction.h"

Instruction::Instruction(){
	opcode="EMPTY";
	PLStage=-1;
	finished=false;
	type = -1;
}

bool Instruction::is_finished(){
	return finished;
}

void Instruction::set_opcode(string op){
	opcode = op;
}

string Instruction::get_opcode(){
	return opcode;
}

void Instruction::set_PLStage(int pl){
	PLStage = pl;
}

int Instruction::get_PLStage(){
	return PLStage;
}

void Instruction::printData(){
		cout<<endl<<"OPCODE:\t\t\t\t"<<opcode<<endl;
		cout<<"Current stage in the PL:\t"<<PLStage<<endl;
		cout<<"The instruction is the type: \t" << type<<endl;
		cout<<"Is finished:\t\t\t"<<finished<<endl;
}


