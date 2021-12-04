#include<iostream>
using namespace std;

void getnum(int& input1, int &input2);
void swapnum(int& input1, int &input2);
void shownum(int& input1, int &input2);
int main(){
	int firstnum,secondnum;
	getnum(firstnum,secondnum);
	swapnum(firstnum,secondnum);
	shownum(firstnum,secondnum);	
} 

void getnum(int& input1, int &input2){
	cout << "enter two numbers: \n";
	cin >> input1 >> input2;
}

void swapnum(int& input1, int &input2){
	int swap; 
	swap = input1;
	input1 = input2;
	input2 = swap;
}
void shownum(int& input1, int &input2){
	cout << "In reverse order the numbers are: \n" << input1 <<" "<< input2;
	
} 

