#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector <int> v;
	int next;
	cin >> next;
	while(next>0){
		v.push_back(next);
		cin >> next;
	}
	cout << v.size() <<endl;
	
	
	for(int i=0; i <v.size();i++)
		cout << v[i] << ' ';
	cout <<endl;
	
	cout << "capacity = " << v.capacity();
	
	return 0;
} 
