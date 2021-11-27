#include<iostream>
using namespace std;
class Car{
	private:
		int num;
		double gas;
	public:
		Car();//建構式
		Car(int n,double g);
		void setCar(int n, double g);
		void show(); 
}; 
class RacingCar : public Car{//衍生類別 
	private:
		int course;
	public:
		RacingCar();//建構式 
		RacingCar(int n,double g,int c);
		void setCourse(int c);
}; 
Car::Car(){
	num = 0;
	gas = 0.0;
	cout << "作成汽車。\n";
}
Car::Car(int n,double g){
	num = n;
	gas = g;
	cout << "作成車牌號碼為"<<num<<"汽油容量為"<<gas<<"的汽車。\n";
}
void Car::setCar(int n, double g){
	num = n;
	gas = g;
	cout << "把車牌設為"<<num<<"把汽油容量設為"<<gas<<"。\n";
}
void Car::show(){
	cout << "車牌號碼為"<<num<<"。\n";
	cout << "汽油容量為"<<gas<<"。\n";
}
RacingCar::RacingCar(){
	course = 0;
	cout << "作成賽車。\n"; 
}
RacingCar::RacingCar(int n,double g,int c) : Car(n,g){
	course = c;
	cout << "作成跑道號碼為"<<course<<"的賽車。\n"; 
}
void RacingCar::setCourse(int c){
	course = c;
	cout << "把跑道設為" << course <<"。\n"; 
}
int main(){
	RacingCar rccar1(1234,20.5,4);
//	rccar1.setCar(1234,20.5);
//	rccar1.setCourse(5);
	return 0;
}

