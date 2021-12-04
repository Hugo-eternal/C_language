#include<stdlib.h>

// 陣列使用連續記憶體空間存放資料，通過索引表示陣列各元素的值
// 一維陣列假設起始位置為 x 則ary[i]的位置為 x + sizeof(int)*i 
// (sizeof(int)為陣列元素整數所佔用的記憶體大小)

int main(){

	int Month[12] = {0} // 將所有元素初始為0
	int Day[31]; // 未設定陣列元素初值
	int Weeks[7] = {3,6,2,5,8,2,1}; // 設定陣列元素的初值
	int Seasons[4][3]; //二維陣列，四列三行
	int Income[2][3] = {{20,15,16},{10,17,22}}; //宣告二維陣列，並設定初值
	
	Month[3] = 5; //將第四個元素設定為5,index從0開始

// 陣列可視為唯獨指標
// 陣列名稱代表陣列在記憶體的起始位置
	
	int *ptr1 = Months; // ptr1指標存放 陣列 的起始位置
	int a = 10 ;
	int *ptr2 = &a; // ptr2指標存放 a 的記憶體位置
       	
	Month[6] = 100;
	(*Month+3) = 100; // 修改Month[3]的資料值	
	
	
	return 0;
}
