/*
 * Rinstruction.c
 *
 *  Created on: Jan 31, 2013
 *      Author: tomyogms
 */
#include "Instruction.h"

Rinstruction::Rinstruction(){
		rop1=-1;
		rop2=-1;
		rres=-1;
		shift=-1;

		type = 0;

		opcode = "EMPTY";

		PLStage = 0;
		finished = false;
}

void Rinstruction::set_rop1(int reg){
	rop1 = reg;
}

int Rinstruction::get_rop1(){
	return rop1;
}


void Rinstruction::set_rop2(int reg){
	rop2 = reg;
}

int Rinstruction::get_rop2(){
	return rop2;

}

void Rinstruction::set_rres(int reg){
	rres = reg;
}

int Rinstruction::get_rres(){
	return rres;
}

int Rinstruction::get_shift(){
	return shift;
}

void Rinstruction::set_shift(int sh){
	shift = sh;
}

void Rinstruction::printData(){
		cout<<"This is the data for an Rinstrucion";
		cout<<endl<<"OPCODE:\t\t\t\t"<<opcode<<endl;
		cout<<"Source Register: 1\t\t"<<rop1<<endl;
		cout<<"Source Register 2:\t\t"<<rop2<<endl;
		cout<<"Destination Register:\t\t"<<rop1<<endl;
		cout<<"Shift:\t\t\t\t"<<shift<<endl;
		cout<<"Current stage in the PL:\t"<<PLStage<<endl;
		cout<<"Is finished:\t\t\t"<<finished<<endl;
}





