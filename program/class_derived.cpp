#include<iostream>
using namespace std;
class Car{
	private:
		int num;
		double gas;
	public:
		Car();//�غc��
		Car(int n,double g);
		void setCar(int n, double g);
		void show(); 
}; 
class RacingCar : public Car{//�l�����O 
	private:
		int course;
	public:
		RacingCar();//�غc�� 
		RacingCar(int n,double g,int c);
		void setCourse(int c);
}; 
Car::Car(){
	num = 0;
	gas = 0.0;
	cout << "�@���T���C\n";
}
Car::Car(int n,double g){
	num = n;
	gas = g;
	cout << "�@�����P���X��"<<num<<"�T�o�e�q��"<<gas<<"���T���C\n";
}
void Car::setCar(int n, double g){
	num = n;
	gas = g;
	cout << "�⨮�P�]��"<<num<<"��T�o�e�q�]��"<<gas<<"�C\n";
}
void Car::show(){
	cout << "���P���X��"<<num<<"�C\n";
	cout << "�T�o�e�q��"<<gas<<"�C\n";
}
RacingCar::RacingCar(){
	course = 0;
	cout << "�@���ɨ��C\n"; 
}
RacingCar::RacingCar(int n,double g,int c) : Car(n,g){
	course = c;
	cout << "�@���]�D���X��"<<course<<"���ɨ��C\n"; 
}
void RacingCar::setCourse(int c){
	course = c;
	cout << "��]�D�]��" << course <<"�C\n"; 
}
int main(){
	RacingCar rccar1(1234,20.5,4);
//	rccar1.setCar(1234,20.5);
//	rccar1.setCourse(5);
	return 0;
}

