#include<iostream>
using namespace std;

int main(){	
/*ex1	
	int *pA;
	pA = new int;//配置記憶體
	cout << "進行動態記憶體配置。\n";
	*pA = 10;
	cout << "使用配置記憶體並輸出" << *pA << " 。 \n";
	delete pA;
	cout << "釋放配置記憶體。\n";  
*/	
/*ex2*/
	int num;
	int *pT;
	cout << "請問要輸入幾個人的測驗成績 ? \n";
	cin >> num;
	pT = new int[num];
	cout << "請輸入所有人的成績。\n";
	
	for(int i=0; i<num; i++){
		cin >> pT[i];
	}
	for(int j=0; j<num; j++){
		cout <<"第 "<< j+1 <<" 個人的成績是 "<< pT[j] <<" 分。\n"; 
	}
	delete[] pT;

	return 0;
} 
