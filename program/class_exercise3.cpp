#include<iostream>
using namespace std;

class Car{
	private:
		int num;
		double gas;
	public:
		static int sum;//靜態成員 
		//以類別全體來操作資料進行儲存的資料成員 
		Car();
//		Car(int n ,double g);
		void setCar(int n,double g);
		void show();	
		static void showSum();
};
//class constructor建構式 
Car::Car(){
	num = 0;
	gas = 0.0;
	sum++;
	cout << "製作了汽車。\n";
	//物件初始化 
}
//class constructor overload建構式多載 
/*Car::Car(int n ,double g){
	num = n;
	gas = g;
	cout << "製作了一輛車牌號碼為: "<< num <<"  汽油容量為: "<< gas << " 的車輛。\n";
	//物件初始化 
}*/
void Car::setCar(int n,double g){
	num = n;
	gas = g;
	cout << "設定車牌號碼為: "<< num <<"  汽油容量為: "<< gas << "。\n";
}
void Car::show(){
	cout << "汽車的車牌號碼為: "<< num <<"。 \n";
	cout << "汽油的容量為: "<< gas << "。 \n";
}
void Car::showSum(){
	cout << "一共有 "<< sum << " 輛汽車。\n"; 
	//靜態成員函數當中，無法存取一般的資料成員。 
}
int Car::sum = 0;//靜態資料成員初始化 
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
