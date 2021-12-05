#include<stdio.h>
#include<stdlib.h>

struct sr{
	int i;
	struct sr *p;//指標p指向sr結構,自我參考機制
};

int main(){	
	
	struct sr sr1,sr2;
	sr1.i = 10;
	sr2.i = 30;
	sr1.p = &sr2;//將sr1項目指向sr2
	sr2.p = NULL;
	
	printf("&sr2 = %p, sr1.p = %p, sr2.p = %p\n",&sr2,sr1.p,sr2.p);
	
	printf("sr2.i = %d\n",sr2.i);
	(*(sr1.p)).i = 40;//sr1.p 存放sr2位置,(*(sr1.p))相當於sr2
	printf("sr2.i = %d\n",sr2.i);

	// sr2.p =&sr1;//尾節點鏈結接回頭節點 >> 環狀鏈結串列

	//實際應用上會使用一指標代表鏈結串列,稱為串列頭,其會指向頭節點
	struct sr *first = &sr1; //first->i = sr1.i
	
	return 0;
}

