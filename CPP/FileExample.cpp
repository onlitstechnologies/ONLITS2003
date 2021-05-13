#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string text;
	
	//---------------- Writing -------------------
	cout<<"Enter a string: ";
	getline(cin,text);		//accept multi-word string
	
	ofstream fout;						//Class for Writing
	fout.open("TEXT.001", ios::app);
	
	fout<<text;
	
	fout.close();
	
	//------------- Reading -------------------------
	
	cout<<"String saved in file is as follows:\n";
	
	ifstream fin;				//Class for Reading
	
	fin.open("TEXT.001");
	
	getline(fin,text);
	
	cout<<text<<endl;
	
	fin.close();
	
	return 0;
}
