#include<stdio.h>
#include<stdlib.h>

struct DNode
{	
	int data;
	struct DNode* next;
	struct DNode* prev;
};
struct DNode* head;

struct DNode* GetNewNode(int x)
{
	struct DNode* newNode = (struct DNode*)malloc(sizeof(struct DNode));
	if(newNode==NULL)
	{
		printf("Out of memory!\n");
	}
	newNode -> data = x;
	newNode -> prev = NULL;
	newNode -> next = NULL;
	
	return newNode;
}
void InsertAtHead(int x)
{
	struct DNode* newNode = GetNewNode(x);
	if(head == NULL){
		head = newNode;
		return;
	}
	head -> prev = newNode;
	newNode -> next = head;
	head = newNode;
}
void InsertAtTail(int x)
{
	struct DNode* temp = head;
	struct DNode* newNode = GetNewNode(x);
	if(head == NULL){
		head = newNode;
		return;
	}
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newNode;
	newNode-> prev = temp;
	newNode-> next = NULL;
}
void Print()
{
	struct DNode* temp = head;
	printf("Forward: ");
	while(temp != NULL){
		printf("%d ",temp -> data);
		temp = temp->next;
	}
	printf("\n");
}
void ReversePrint(){
	struct DNode* temp = head;
	if(temp == NULL) return; //empty list

	while(temp->next != NULL){
		temp = temp->next;
	}
	printf("Reverse: ");
	while(temp != NULL ){
		printf("%d ",temp->data);
		temp = temp->prev;
	}
	printf("\n");
}
void free_list(struct DNode* node)
{
	struct DNode* current,*temp;
	current = node;
	while(current != NULL){
		temp = current;
		current = current->next;
		free(temp);
	}
}
int main()
{
	head = NULL;//empty list.
	printf("Insert at Head : \n");
	InsertAtHead(2); Print(); ReversePrint();
	InsertAtHead(4); Print(); ReversePrint();
	InsertAtHead(6); Print(); ReversePrint();
	printf("Insert at Tail : \n");
	InsertAtTail(8); Print(); ReversePrint();
	InsertAtTail(10); Print(); ReversePrint();
	InsertAtTail(12); Print(); ReversePrint();
	printf("free!\n");
	free_list(head);
	return 0;
}







