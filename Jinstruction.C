/*
 * Jinstruction.C
 *
 *  Created on: Feb 1, 2013
 *      Author: tomyogms
 */
#include "Instruction.h"

Jinstruction::Jinstruction(){
	type = 2;
	target = -1;
}

void Jinstruction::set_target(int tar){
	target = tar;
}

int Jinstruction::get_target(){
	return target;
}

void Jinstruction::printData(){
	cout<<"This is the data for an Jinstrucion";
	cout<<endl<<"OPCODE:\t\t\t\t"<<opcode<<endl;
	cout<<"Target:\t\t\t\t"<<target<<endl;
	cout<<"Current stage in the PL:\t"<<PLStage<<endl;
	cout<<"Is finished:\t\t\t"<<finished<<endl;
}




