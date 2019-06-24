#include "MDF.h"
#include "pipelineHandler.h"


int main(){

	/* Test Machine Description File
	string file("mdf.txt");
	MDF mdf(file);
	mdf.printData();
	cout<<endl;


	  Testing the Rinstruction class
	Rinstruction r;
	r.printData();
	cout<<endl;

	 Testing the Jintruction class
	Jinstruction j;
	j.printData();
	cout<<endl;

	  Testing the Iinstruction class
	Iinstruction i;
	i.printData();
	cout<<endl;

	PLHandler pl;
	pl.insertInstruction(r);
	pl.printSize();
	Instruction in;
	in = pl.popInstruction();
	in.printData();
	pl.printSize();
*/
	Rinstruction r1,r2,r3,r4,r5;
	r1.set_opcode("ADD");
	r2.set_opcode("ADDI");
	r3.set_opcode("DIV");
	r4.set_opcode("SUB");
	r5.set_opcode("MUL");
	PLHandler pl;
	pl.insertInstruction(r1);
	pl.insertInstruction(r2);
	pl.insertInstruction(r3);
	pl.insertInstruction(r4);
	pl.insertInstruction(r5);
	pl.printSize();
	pl.executePL();

	return 0;
}
