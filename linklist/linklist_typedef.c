#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *link;
};
typedef struct Node node;
typedef struct node *nodePointer;//指向node型態的指標變數

struct DNode{//雙向鏈結串列 
	int data;
	struct DNode *llink; //self-reference
	struct DNode *rlink; //self-reference
};
typedef struct DNode dnode;
typedef struct dnode *DnodePointer;

int main(){
	
	node n1,n2;
	nodePointer first;
	return 0;
}
