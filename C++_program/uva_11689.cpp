#include<iostream>
using namespace std ;
int main(){
	int ans;
	int N;
	int e,f,c;
	int total;
	cin >> N;
	//n-test e-originbottle f-streetBottle c-cost
	for(int i=N;i>0;i--){
		cin >> e >> f >> c;
		total = e+f;
		ans = 0;
//		cout <<"e: "<<e<<" f: "<<f<<" c: "<<c<<" total/c : "<<(total/c)<<endl;
		while(total>=c){
			ans = ans + total/c;
//			cout << ans << endl;
			total = total/c + total%c;  
		}
		cout << ans << endl;
	}
	return 0;
} 
