#include<iostream>
using namespace std;

class point{
	private:
		int x;//(0~10)
		int y;//(0-10)
	public:
		void setX(int a);
		void setY(int b);
		int getX(){return x;}
		int getY(){return y;}
};
void point::setX(int a){
	if(a<=10){
		x = a;
	}
	else{
		cout<<"x set error\n";
		while(a>10){
			cout<<"Reset X\n";
			cin>>a;
		}
		x = a;
	}
	
}
void point::setY(int b){
	if(b<=10){
		y = b;
	}
	else{
	cout<<"y set error\n";
	while(b>10){
			cout<<"Reset Y\n";
			cin>>b;
		}
		y = b;
	
	}
	
	
}
void show(point *ptr);
int main(){
	point P;
	int x=0,y=0;
	cout << "�п�Jx�y�СC\n";
	cin>> x ;
	P.setX(x);
	cout << "�п�Jy�y�СC\n";
	cin>>y;
	P.setY(y);
	show(&P);
}
void show(point *p){
	int x=p->getX();
	int y=p->getY();
	cout <<"�ҿ�J���y�Ь�"<< "( "<<x<<" , "<<y<< " )�C\n"; 
}
