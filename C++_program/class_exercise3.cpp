#include<iostream>
using namespace std;

class Car{
	private:
		int num;
		double gas;
	public:
		static int sum;//�R�A���� 
		//�H���O����Ӿާ@��ƶi���x�s����Ʀ��� 
		Car();
//		Car(int n ,double g);
		void setCar(int n,double g);
		void show();	
		static void showSum();
};
//class constructor�غc�� 
Car::Car(){
	num = 0;
	gas = 0.0;
	sum++;
	cout << "�s�@�F�T���C\n";
	//�����l�� 
}
//class constructor overload�غc���h�� 
/*Car::Car(int n ,double g){
	num = n;
	gas = g;
	cout << "�s�@�F�@�����P���X��: "<< num <<"  �T�o�e�q��: "<< gas << " �������C\n";
	//�����l�� 
}*/
void Car::setCar(int n,double g){
	num = n;
	gas = g;
	cout << "�]�w���P���X��: "<< num <<"  �T�o�e�q��: "<< gas << "�C\n";
}
void Car::show(){
	cout << "�T�������P���X��: "<< num <<"�C \n";
	cout << "�T�o���e�q��: "<< gas << "�C \n";
}
void Car::showSum(){
	cout << "�@�@�� "<< sum << " ���T���C\n"; 
	//�R�A������Ʒ��A�L�k�s���@�몺��Ʀ����C 
}
int Car::sum = 0;//�R�A��Ʀ�����l�� 
int main(){
	/*Car car1;
	Car car2(1234,20.5);
	Car mycar[3]={
		Car(),
		Car(1234,20.5),
		Car(4567,52.5)
	};*/
	Car::showSum();
	Car car1;
	car1.setCar(1234,20.5);
	Car::showSum();
	
	Car car2;
	car2.setCar(4567,30.5);
	Car::showSum();
	
	
	return 0;
} 
