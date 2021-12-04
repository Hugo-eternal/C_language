#include<stdio.h>
#include<stdlib.h>

void func1(int *p,int len);//函式宣告

int main(){
	
	int Ary[3] ={2,5,8};
	
	func1(Ary,3);//因為陣列名稱已代表位址,故不必使用＆符號
	
// *** dynamic array ***
	
	int *stu;
       	int n = 50;

	stu = (int *)malloc(sizeof(int)*n);//動態記憶體配置 	
	stu[5] = 80;
	stu[6] = 76;
	
	// 記憶體位址 : &arr[i] = ptr + i
	// 變數值存取 : arr[i] = *(ptr + i)
	printf("陣列位址為：%p 資料內容為: %d\n",&stu[5],stu[5]);
	printf("陣列位址為：%p 資料內容為: %d\n",(stu+6),*(stu+6));
	free(stu);// 釋放記憶體



	return 0;
}

void func1(int *p,int len){

	int i;
	for(i=0;i<len;i++)
		*(p+i) = *(p+i)-1;
}
