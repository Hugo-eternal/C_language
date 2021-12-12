#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

struct Node
{
    int data;
	struct Node *link;
};
typedef struct Node node;
typedef node *nodePointer;

//創建節點
nodePointer GetNode()
{    
    nodePointer NewNode;
    NewNode = (nodePointer)malloc(sizeof(node));
    if(NewNode == NULL)
        printf("記憶體不足");
	
	return NewNode;
}

int InsertAfter(nodePointer L, nodePointer m, int d)
{
	//增加節點,L is first node
	nodePointer n = GetNode();
	
	if(n == NULL) return false;
	n->data = d; n->link = NULL;

	if(m != NULL){
		n->link = m->link;
		m->link = n;
	}
	else
		L=n;
	return true;
}
//刪除節點
nodePointer PreNode(nodePointer L, nodePointer m)//find the prenode
{
	nodePointer B = L;
	while(B != NULL && B->link != m){
		B = B->link;
	}
}
int DeleteNode(nodePointer L,nodePointer m)
{
	nodePointer B = L;
	if(L == m){
		B->link = NULL;
		free(m);
		return true;
	}
	B = PreNode(L,m);
	if(B == NULL) return false;
	B->link = m->link;
	free(m);
	return true;
}

//遍歷所有資料點
void LinkListTraverse(nodePointer L)
{
	int counter = 0;//計算有多少個資料點	
	nodePointer w = L;//指向資料點
	while(w != NULL)
	{	
		counter += 1;
		printf("%d \t",w->data);
		w = w->link; 
	}
	printf("\ncounter = %d \n",counter);
}
//連結兩串列
nodePointer Concatenate(nodePointer L1,nodePointer L2)
{
	nodePointer w = L1;
	if(w != NULL){//L1非空串列
		while(w->link != NULL)
			w = w->link;
		w->link = L2;
	}
	else
		L1 = L2;
	return L1;
}
//建立鍊結串列
nodePointer CreateAll(int *data, int n)
{
	nodePointer L = NULL;
	int i;
	for(i=n-1;i>=0;i--){
		nodePointer n = GetNode();
		
		if(n == NULL) break;
		
		n-> data = data[i];
		n-> link = L;
		L = n;

		printf("在串列開頭處插入一個節點 %d ....ok!\n",data[i]);
	}
	return L;
}


//主程式
int main(){
	
/*	nodePointer first = NULL;	
	int data[6] = {26,18,15,29,32,12};
	printf("create.....\n");
	first = CreateAll(data,6);
	LinkListTraverse(first);*/
	
	nodePointer L1=NULL,L2 = NULL,L3=NULL;
	int d1[3] = {1,2,3};
	int d2[3] = {4,5,6};
	L1 = CreateAll(d1,3);
	L2 = CreateAll(d2,3);
	L3 = Concatenate(L1,L2);
	LinkListTraverse(L3);
	
	return 0;

}

