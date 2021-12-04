#include<stdio.h>
#include<stdlib.h>

#define Max_Item 100

struct item
{
	int row;
	int column;
	double value;
};

void Transpose(struct item A[],struct item B[])
{
	int i,j,workb=1;
	
	B[0].row = A[0].column;
	B[0].column = A[0].row;
	B[0].value = A[0].value;

	for(i=1;i<=A[0].column;i++){
		for(j=1;j<=A[0].value;j++)
		{
			if(A[j].column == i){
				B[workb].row = A[j].column;
				B[workb].column = A[j].row;
				B[workb].value = A[j].value;
				workb++;
			}
		}
	}

}

int main()
{
	struct item A[Max_Item+1];
	struct item B[Max_Item+1];
	
	A[0].row = 4;	A[0].column = 3; A[0].value = 3;
	
	A[1].row = 1;	A[1].column = 1; A[1].value = 2;
	
	A[2].row = 2;	A[2].column = 3; A[2].value = 1;

	A[3].row = 3;	A[3].column = 1; A[3].value = 7;
	
	Transpose(A,B);
	for(int i=0 ;i<4;i++)
		printf("B[%d].row = %d , B[%d].column = %d , B[%d].value = %f\n",i,B[i].row,i,B[i].column,i,B[i].value);


	return 0;
}
