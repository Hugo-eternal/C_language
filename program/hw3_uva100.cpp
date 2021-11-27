//hw3_uva100
#include<iostream>
using namespace std;

int CycleLength(int n)
{
	int Len = 1;
	while(true){
		if(n==1)
			break;
		else if (n%2)
			n = 3*n + 1;
		else 
			n = n/2;
		Len++;
	}
	return Len;
}
int main(){
	int i,j,t,k;
	int MaxLen, Len;
	
	while(cin>>i>>j){
		cout << i << " " << j << " " ;
		if(i>j){
			t = i;
			i = j;
			j = t;
		}
		MaxLen = 0;
		for(k=i;k<=j;k++){
			Len = CycleLength(k);
			if(Len>MaxLen)
				MaxLen = Len;
		}
		cout << MaxLen <<endl;
	}
	return 0;
}
