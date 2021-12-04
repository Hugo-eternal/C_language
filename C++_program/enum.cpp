#include <iostream>
#include <string>
using namespace std ;
int main()
{
	enum month{
		jan = 31,
		feb = 28
	};
	cout << jan << endl;
	
	int a = 2;
	int b;
	
	b = 2*(a++);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl; 	
 	a = 2; 
 	b = 2*(++a);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl; 	
 	
	 
	return 0;	
} 
