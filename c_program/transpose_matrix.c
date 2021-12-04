#include<stdio.h>
#include<stdlib.h>
#define ROW 2
#define COL 3

void Transpose(int A[][COL], int B[][ROW],int rows, int cols){
	int i,j;
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++)
			B[j][i] = A[i][j]; 
	}
}

int main(){
	
	int A[2][3] = {{2,5,8},{3,6,9}};
	int B[3][2] = {0};
	
	Transpose(A,B,2,3);
	printf("B[2][1] = %d\n",B[2][1]);
	
	return 0;
}









