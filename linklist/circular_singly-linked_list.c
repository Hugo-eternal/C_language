#include<stdio.h>
#include<stdlib.h>

struct Node{
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
//環狀串列建立
nodePointer CreateAllC(int *data,int n)
{
	nodePointer L = NULL;
	nodePointer w;
	int i;
	for(i=n-1;i>=0;i--){
		nodePointer n = GetNode();
		if(n==NULL) break;
		n->data = data[i];
		n->link = L;
		L = n;
		printf("在串列開頭處插入一個節點%d.....OK!\n",data[i]);
	}
	//Create the tail to head node
	w = L;
	while(w->link != NULL)
		w = w->link;
	w->link = L;
	printf("w->data = %d\n",w->data);
	return L;
}


//單向環狀陣列走訪
void CLinkListTraverse(nodePointer L)
{
        nodePointer w = L;
        if(w != NULL){//Not empty linked list
            do{
                printf("%d ",w->data);
                w = w->link;
            }while(w!=L);
        }
}

int main(){
	nodePointer first;
	int data[10] = {0,1,2,3,4,5,6,7,8,9};
	
	first = CreateAllC(data,10);
	CLinkListTraverse(first);
	return 0;
}







