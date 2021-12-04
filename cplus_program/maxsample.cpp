#include<iostream>
#include "max.h"

using namespace std;

int main(){
	int a,b,ans=0;
	cin >> a >>b;
	ans = max(a,b);
	cout << "max = " << ans;	
}
