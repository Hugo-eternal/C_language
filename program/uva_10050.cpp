//uva_10050
#include<iostream>
using namespace std;

int main(){
	int t;
	int n,p;
	int h[100]={0};
	int hartal;
	cin >> t;
	int day=0;
	for(int i=t;i>0;i--){
		cin >> n >> p  ;
		for(int j=0;j<p;j++){
			cin >> hartal;
			h[j]= hartal; 
		}
		for(int k = 0; k <=n ; k++ ){
//		cout << "h["<< k<< "] = " << h[k] <<endl;
			for(int j=0;j<p;j++){
				if(k%h[j]==0 && (k+1)%7!=0 && (k)%7!=0 && k!=0 ){
					day+=1;	
//					cout << "day: " << k << endl;	
					break;
				}
			}
		}
	cout << "ans: "<<day << endl;	
	day=0;
	}	
	return 0;
} 
