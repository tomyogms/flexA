/*
 * Iinstruction.C
 *
 *  Created on: Feb 1, 2013
 *      Author: tomyogms
 */

#include "Instruction.h"

Iinstruction::Iinstruction(){
		rs=-1;
		rt=-1;
		immediate=-1;

		type = 1;

		opcode = "EMPTY";

		PLStage = 0;
		finished = false;
}

void Iinstruction::set_rs(int reg){
	rs = reg;
}

int Iinstruction::get_rs(){
	return rs;
}


void Iinstruction::set_rt(int reg){
	rt = reg;
}

int Iinstruction::get_rt(){
	return rt;

}

void Iinstruction::set_immediate(int imm){
	immediate = imm;
}

int Iinstruction::get_immediate(){
	return immediate;
}

void Iinstruction::printData(){
		cout<<"This is the data for an Iinstrucion";
		cout<<endl<<"OPCODE:\t\t\t\t"<<opcode<<endl;
		cout<<"Source Register: 1\t\t"<<rs<<endl;
		cout<<"Destination Register:\t\t"<<rt<<endl;
		cout<<"Immediate:\t\t\t"<<immediate<<endl;
		cout<<"Current stage in the PL:\t"<<PLStage<<endl;
		cout<<"Is finished:\t\t\t"<<finished<<endl;
}




