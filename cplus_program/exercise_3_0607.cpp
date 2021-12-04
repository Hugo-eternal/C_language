#include<iostream>
#include <string>
using namespace std;

template<class M>
M maximum(M first,M second);
//Precondition: The operator < is defined for the type M.
//Returns the maximum of first and second.
template<class M>
M maximum(M first,M second){
	M result;
	result = (first < second) ? second:first; 
	return (result);
}
int main(){

	int num0=2,num1=9999999,int_ans;
	char c0='z',c1='b',char_ans;
	int_ans = maximum<int>(num0,num1);
	cout <<"num_0 = "<< num0 << " num_1 = "<< num1 <<" int_max = " << int_ans << endl;
	char_ans = maximum<char>(c0,c1);
	cout <<"char_0 = "<< c0 << " char_1 = "<< c1 <<" char_max = " << char_ans << endl;
	return 0;	
}

 
