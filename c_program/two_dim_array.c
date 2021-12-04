#include<stdio.h>
#define n 3 // 二維陣列須標明第二維大小,編譯器才能得知 ary[i][j] =*(ary+(i*n+j))

void func(int p[][n],int, int);// func define

int main(){
	int i=0,j=0,rows=2,cols=3;
	
	//int Ary[rows][cols] ={{2,5,8}, {3,6,9}};//變量不能作為陣列初始化維度
	int Ary[2][3] ={{2,5,8}, {3,6,9}};
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("第 %d 列 第 %d 行 值為: %d \n",i+1,j+1,Ary[i][j]);
		}
	}
	func(Ary,2,3);
	
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("第 %d 列 第 %d 行 值為: %d \n",i+1,j+1,Ary[i][j]);
		}
	}
	return 0;
}

void func(int p[][n], int rows, int cols){
	
	int i,j;

	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			p[i][j] = p[i][j]-1; // *( p + (i x n + j) )
		}
	}
}





