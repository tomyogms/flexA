/*
 * Instruction.h
 *
 *  Created on: Jan 30, 2013
 *      Author: tomyogms
 */

#include "defs.h"

class Instruction{
	protected:
		string opcode;

		int type;

		int PLStage;
		bool finished;


	public:
		Instruction();
		string get_opcode();
		void set_opcode(string);
		void set_PLStage(int);
		int get_PLStage();
		bool is_finished();
		void printData();
};


class Rinstruction : public Instruction{
	private:
		int rop1;
		int rop2;
		int rres;
		int shift;


	public:
		Rinstruction();
		void set_rop1(int);
		int get_rop1();
		void set_rop2(int);
		int get_rop2();
		void set_rres(int);
		int get_rres();
		void set_shift(int);
		int get_shift();
		void printData();
};

class Iinstruction : public Instruction{
	private:
		int rs;
		int rt;
		int immediate;


	public:
		Iinstruction();
		void set_rs(int);
		int get_rs();
		void set_rt(int);
		int get_rt();
		void set_immediate(int);
		int get_immediate();
		void printData();
};

class Jinstruction : public Instruction {
	private:
		int target;

	public:
		Jinstruction();
		void set_target(int);
		int get_target();
		void printData();

};

