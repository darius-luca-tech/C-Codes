#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin;
	string line;
	//string st_l[];
	double num;
	int integer;
	fin.open("in.txt");

	if(fin) cout<<"True"<<endl;
	while(getline(fin, line)) {
		cout<<line<<endl;
	}

	fin.close();
	return 0;
}
