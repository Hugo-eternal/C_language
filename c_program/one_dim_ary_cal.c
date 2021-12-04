#include<stdio.h>

int insertElement(int value,int location,int *p,int len){

	int i;
	if(location >= len) return 0;
	for(i=len-2;i>=location;i--){
		*(p+i+1)  = *(p+i);
	}
	*(p+location) = value;
	return 1;
}
int deleteElement(int location,int *p,int len){
	
	int i;
	if(location >= len) return 0;
	for(i=location;i<len;i++){
		*(p+i) = *(p+i+1);
	}
	*(p+len-1)= 0;
}

int main(){

	int array[7] ={2,4,6,8,10,12,14};
	int array2[7] ={2,4,6,8,10,12,14};
	int e;
	
	printf("Origin array : ");
	for(int i=0;i<7;i++){
		printf("%d ",array[i]);
	}
	printf("\n");
	
	e = insertElement(9,2,array,7);
	
	printf("Insert New array : ");
	for(int i=0;i<7;i++){
		printf("%d ",array[i]);
	}
	printf("\n");
	
	e = deleteElement(2,array2,7);

	printf("Delete New array : ");
	for(int i=0;i<7;i++){
		printf("%d ",array2[i]);
	}
	printf("\n");
	return 0;
}




