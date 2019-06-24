#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class MDF{

	private:
		int ALU;
		int DivMul;

	public :

	MDF(string);
	int getALU();
	int getMulDiv();
	void printData();

};

