#include<cctype>
#include<iostream>
using namespace std;
int main(){
	char next;
	int i = 0 ,the_first = 1;
	
	cout << "Enter the sentence: \n";
	cin.get(next);
	while(next != '.'){
		if(!isspace(next))
		{
			if(the_first == 1){
				cout << (char) toupper(next);
				the_first =0;
			}
			else{
				cout << (char) tolower(next);
				i++;
			}
		}
		else{
			if(i!=0){
				cout << ' ';
				i = 0;
			}
		}
		cin.get(next);
	}
	cout << next;
}
