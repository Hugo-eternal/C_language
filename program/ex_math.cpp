#include<iostream> 
#include<cmath>
using namespace std;

int main()
{
	//*****
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(5);
	//*****
	double a;
	int candy=5,value=3;
	double sales;
	sales = static_cast<double>(candy)/value;
	cout << sales << endl;
	
	cout << "Enter a real numbers: ";
	cin >> a;

	cout << "Your entered number is " << a << ", "<< "Square root of "<< a << " = "
		<< sqrt(a) << endl;
		
	cout << pow(sqrt(a), 2.0);
	
}
