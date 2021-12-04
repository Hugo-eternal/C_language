#include<stdio.h>

int fib(int n){
	if(n ==0 | n==1)
		return n;
	else
		return fib(n-1)+fib(n-2);
}

int main(){
	int n,sum;
	printf("Please enter the fib-sequence N : ");
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		sum = fib(i);
		printf("fibonacci sequence - the %d numbers is : %d\n",i,sum);
	}

	return 0;
}
