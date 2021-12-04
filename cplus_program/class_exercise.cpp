#include<iostream>
using namespace std;

class Car{
	private:
		int num;
		double gas;
	public:
		int getNum(){return num;}//Inline function can be effectiveness
		double getGas(){return gas;}//Inline function can be effectiveness
		void show();
		void setNumGas(int n,double g);
}; 
void Car::show(){
	cout << "汽車的車牌號碼為 "<< num <<" 。\n";
	cout << "汽油容量為 "<< gas <<" 。\n"; 
}
void Car::setNumGas(int n,double g){
	if (g > 0 && g < 1000){
		num = n;
		gas = g;
		cout << "把車牌設為" << num <<"、汽油容量設為" << gas << " 。\n"; 
	}
	else{
		cout << g << "不是正確的汽油容量。\n";
		cout << "無法變更汽油的容量。\n"; 
	}
}
void buy(Car *c);
int main(){
	Car car1;
	//無法進行這種存取(private) 
	//car1.num = 1234;
	//car1.gas = 20.5;
	car1.setNumGas(1234, 20.5);
	buy(&car1);
	return 0;
}
void buy(Car *c){
	int n = c->getNum();
	double g = c->getGas();
	cout << "購買了車牌號碼為 "<< n << "、汽油容量為 "<< g << " 的車子。\n"; 
}
