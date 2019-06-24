#include "MDF.h"

using namespace std;


MDF::MDF(string abc){
	string line;
  	ifstream myfile (abc.c_str());
	if (myfile.is_open())
  	{
    		while ( myfile.good() )
   	 	{
      			getline (myfile,line,'=');
      			if (line=="ALU"){
      				getline (myfile,line);
      				ALU = atoi(line.c_str());
      			}
      			if (line=="MUL"){
      			      getline (myfile,line);
      			      DivMul = atoi(line.c_str());
      			}
    		}
    		myfile.close();
  	}
	else cout << "Unable to open file"; 
}

int MDF::getALU(){
	return ALU;
}

int MDF::getMulDiv(){
	return DivMul;
}

void MDF::printData(){
	cout<<"ALU Latency:\t\t"<<getALU()<<endl;
	cout<<"MUL/DIV latency:\t"<<getMulDiv()<<endl;

}
