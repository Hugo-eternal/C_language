#include<iostream>
using namespace std;

int main(){	
/*ex1	
	int *pA;
	pA = new int;//�t�m�O����
	cout << "�i��ʺA�O����t�m�C\n";
	*pA = 10;
	cout << "�ϥΰt�m�O����ÿ�X" << *pA << " �C \n";
	delete pA;
	cout << "����t�m�O����C\n";  
*/	
/*ex2*/
	int num;
	int *pT;
	cout << "�аݭn��J�X�ӤH�����禨�Z ? \n";
	cin >> num;
	pT = new int[num];
	cout << "�п�J�Ҧ��H�����Z�C\n";
	
	for(int i=0; i<num; i++){
		cin >> pT[i];
	}
	for(int j=0; j<num; j++){
		cout <<"�� "<< j+1 <<" �ӤH�����Z�O "<< pT[j] <<" ���C\n"; 
	}
	delete[] pT;

	return 0;
} 
