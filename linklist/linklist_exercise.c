#include<stdio.h>
#include<stdlib.h>

/*基本鏈結陣列宣告
struct listnode{
	
	char data;
	int link;
};

struct listnode List[10];//陣列元素資料型態為listnode結構,靜態陣列.*/

struct s{
	int i;
	int *p;//指標變數
};

int main(){
	
	int num = 100;
	struct s v1;
	v1.i = 10;
	v1.p = &num;//p指向num變數
	printf("num 記憶體位址: %p, v1.i = %d, v1.p = %p\n",&num,v1.i,v1.p);
	
	struct s *sp = &v1;
	sp->i = 30;//指標指向一結構(struct),利用該指標存取結構內變數時要使用 -> 運算子
	*(sp->p) = 70;
	printf("sp->i = %d, *(sp->p) = %d, *(sp).p = %p\n",sp->i,*(sp->p),(*sp).p);


	return 0;
}









