#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
double total_cost(double p, int n);

int main()
{
	int price, number;
	double total;
	
	cout << "Enter price, number: ";
	cin >> price >> number;
	total = total_cost(price, number);
	cout << "Total cost = " << total << endl;
	
} 
double total_cost(double p, int n)
{
	const double Tax_rate = 0.05;
	double subtotal;
	subtotal = p * n;
	return (subtotal + subtotal * Tax_rate);
}
