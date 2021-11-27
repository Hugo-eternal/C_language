#include<iostream>
using namespace std;

class Point{
	private:
		int x;
		int y;
	public:
		Point(int a=0,int b=0){x=a; y=b;}
		void show(){cout <<" x : "<<x<<" y : "<<y<<"\n";}
		Point operator+(Point p);
};
Point Point::operator+(Point p){
	Point tmp;
	tmp.x = x + p.x;
	tmp.y = y + p.y;
	return tmp;
}
int main(){
	Point p1(1,3);
	Point p2(2,5);
	Point p3 = p1+p2;
	cout << "p1 :";p1.show();
	cout << "p2 :";p2.show();
	cout << "p1 + p2 = ";p3.show();
}
