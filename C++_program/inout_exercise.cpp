#include <iostream>
using namespace std ;
int main()
{
	int num;
	double oneWeight;
	double x, y;
	cout << "Enter the number of candy bar in package\n";
	cin >> num;
	cout << endl;//ªÅ¤@¦æ 
	cout << num << " pieces\n" << endl;
//2	
	cout << "Enter two real numbers: \n";
	cin >> x >> y;
// 	show decimal places
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(5);
	cout << x << "+ "<< y << "=" << (x+y) << endl;
	return 0;	
} 
