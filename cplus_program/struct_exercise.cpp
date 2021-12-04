#include<iostream>
using namespace std;

struct car{
	int num;
	double gas;
}; 
void show(car* pC);

int main(){
	car toyota;
	cout << "請輸入車牌號碼: ";
	cin >> toyota.num; 
	cout << "請輸入汽油的容量: ";
	cin >> toyota.gas;
	
	show(&toyota);
//	cout << "車牌號碼是 "<< toyota.num << " ;汽油的容量是 "<< toyota.gas <<"。\n";
	return 0; 
}
void show(car* pC){
	cout << "車牌號碼是 "<< pC->num << " ;汽油的容量是 "<< pC->gas <<"。\n";
}

