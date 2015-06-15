/*
a simple program that will help you filter the list that you copied from the data section in the crytolocker sample.

*/
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
	string fPath, // txt file path
		   text; // line of text from file
	fstream infile;
	
	cout << "enter file path: ";
	cin  >> fPath;
	
	infile.open(fPath.c_str(), ios::in); // open file
	if(!infile.is_open()){
		cout << "fail to open the file.\n";
		exit(1);
	}
	
	// filter out even ones, so only odd ones will be printed
	for(int i = 1; getline(infile, text); i++){
		if(i % 2 == 1){
			cout << text << endl;
		}		
	}
		
	return 0;
}
