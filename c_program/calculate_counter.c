#include<stdio.h>

int main(){
	
	int i,j,counter;
	int n = 8;
	for(i=1,counter=0;i<=n;i++){
		for(j=2;j<=n;j++){
			counter++;
		}
	}
	
	printf("counter1 : %d\n",counter);
	
	for(i=1,counter=0;i<=n;i++){
		for(j=1;j<=i;j++){
			counter++;
		}
	}
	
	printf("counter2 : %d\n",counter);
	
	return 0;
}
