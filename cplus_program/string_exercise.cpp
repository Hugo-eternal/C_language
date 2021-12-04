#include <iostream>
#include <string>
using namespace std ;
int main()
{
	string s1, s2, s3;
	int i ;
	char c ; 
	bool x ; //false => 0
	
	cout << "Enter two string \n";
	cin >> s1 >> s2 ;
	
	cout << ( s1 + s2 ) << "\n" << endl ; 
	
	i = 'A';
	cout << "i =  " << i <<endl;
	
	c = 65;
	cout << "c =  " << c <<endl;
	
	cout << "Enter an integer: ";
	cin >> i;
	if (i != 0)
		x = true;
	else
		x = false;
	
	if (x)
		cout << "non-zero\n";
	else
		cout << "zero\n";	
		
	return 0;	
} 
