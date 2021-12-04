#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main(){
	ifstream fin;
	ofstream fout;
	int a,b;
	
	fin.open("In_text.txt");
	fin >> a >> b;
	
	if(fin.fail()){
		cout << "Open input file error\n";
		exit(1);
	}
	
	fout.open("Out_test.txt");
//  fout.width(50);
//	fout.setf(ios::left);
	fout << "First = " << a << ", Scond = " << b << endl;
	if(fout.fail()){
		cout << "Open output file error\n";
		exit(1);
	}
	
	fin.close();
	fout.close();
	
	return 0;
}
