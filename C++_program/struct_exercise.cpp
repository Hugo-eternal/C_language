#include<iostream>
using namespace std;

struct car{
	int num;
	double gas;
}; 
void show(car* pC);

int main(){
	car toyota;
	cout << "�п�J���P���X: ";
	cin >> toyota.num; 
	cout << "�п�J�T�o���e�q: ";
	cin >> toyota.gas;
	
	show(&toyota);
//	cout << "���P���X�O "<< toyota.num << " ;�T�o���e�q�O "<< toyota.gas <<"�C\n";
	return 0; 
}
void show(car* pC){
	cout << "���P���X�O "<< pC->num << " ;�T�o���e�q�O "<< pC->gas <<"�C\n";
}

