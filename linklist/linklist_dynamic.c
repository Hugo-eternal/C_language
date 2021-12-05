#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *link;
}
typedef struct Node node;
typedef node *nodePointer;

nodePointer Getnode(){

	nodePointer = NewNode;
	NewNode = (nodePointer)malloc(sizeof(node));
	if(NewNode==NULL)
		printf("out of memory! \n");
	
	return NewnNode;
}
int insertAfter(nodePointer L,nodePointer m,int d){
	nodePointer n = Getnode();
	if(n == NULL)
		return 0;//FALSE
	n -> data = d;
	n -> link = NULL;
	if(m!=NULL){
		n-> link = m->link;
		m-> link = n;
	}
	else//串列原為空串列
		L = n;
	return 1;//TRUE
}

int main(){
	
	node n1,n2;
	node first;

}

