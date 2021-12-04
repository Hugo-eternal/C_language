#include<iostream>
#include<string>
using namespace std;

int main(){
	string word;
	string ans;
//	cout << word << endl;
	while(getline(cin,word)){ 
		for(int i=0;i<(word.length());i++){
			word[i]= word[i]-7;
		}
		for(int i=0;i<(word.length());i++){
			cout << word[i];
		}
	} 
}
