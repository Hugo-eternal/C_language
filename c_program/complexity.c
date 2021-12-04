#include<stdio.h>
int func1(int ,int );

int main(){
	
	int x = 6 ;
	int y = 4 ;
	printf("Ans : %d \n",func1(x,y));
		
	return 0;
}

int func1(int x, int y){

	return (x+y)*(x-y);
}
