//Hw4
#include<iostream>
#include<cctype> 
#include<fstream>
using namespace std;
//¤p¼gASCII 97~122 
//¤j¼gASCII 65~90
//¼Æ¦r 48~57  
int main(){
	
	ifstream fin;
	ofstream fout;
	char next;
	fin.open("hw4.txt");
	if(fin.fail())
		cout << "Read Error";
	fout.open("hw4_out.txt",ios::app);
	fin.get(next);
	while(!fin.eof()){
		if(!isspace(next)){
			if(next>=65&&next<=90)
				next +=32;
			else if(next>=97&&next<=122)
				next -=32;
			else
				next = 48;
			fout << next;
		}
		else if(next=='\n'){
			fout << endl;
		}
		else
			fout << '~';
		fin.get(next);
	}
	fout<<endl;
	return 0;
}
 
