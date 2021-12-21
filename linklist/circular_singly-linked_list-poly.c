#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<stdbool.h>

struct PolynomialNode_of_circularList{
	double coef;
	int expont;
	struct PolynomialNode_of_circularList *link; 
};
typedef struct PolynomialNode_of_circularList node;
typedef node *node_p;

node_p avail;

node_p GetNode(void)
{
	node_p NewNode_p;
	if(avail!=NULL)
	{
		NewNode_p = avail;
		avail = avail->link;
	}
	else
	{
		NewNode_p = (node_p)malloc(sizeof(node));
		if(NewNode_p==NULL){	printf("out of memory!"); exit(1);}
	}
	return NewNode_p;
}

void RetNode(node_p ReleaseNode_p){
	ReleaseNode_p -> link = avail;
	avail = ReleaseNode_p;
}
//Recyle All of poly series
/*
void CircularListErase(node_p *p){
	node_p SecondNode;
	if((*p)!=NULL){
		SecondNode = (*p)->link;
		(*p)->link = avail;
		avail = SecondNode;
		(*p) = NULL; 
	}
}*/
//include head poly & erase modify
void NewCircularListErase(node_p *p)
{
	node_p Node;
	Node = (*p) -> link;
	(*p)->link  = avail;
	avail = Node;
	(*p) = NULL;
}

// poly attach
void CircularListPolyAttach(node_p *rear,double coef,int expont)
{
	node_p NewNode_p;
	NewNode_p = GetNode();
	NewNode_p -> coef = coef;
	NewNode_p -> expont = expont;
	NewNode_p -> link = (*rear)->link;
	(*rear) -> link = NewNode_p;
	(*rear) = NewNode_p;
}

//circularlist poly add
node_p CircularListPolyAdd(node_p p1, node_p p2){
	node_p p3,p1_head,p3_tail;
	int ok = 0;
	double sum;

	p1_head = p1;
	p1 = p1->link; //pointer to p1 highest expont
	p2 = p2->link; //pointer to p2 highest expont
	p3 = GetNode(); //get p3 head node
	p3->expont = -1;//set p3 head node
	p3_tail = p3;

	do
	{
		if(p1->expont > p2->expont)
		{
			CircularListPolyAttach(&p3_tail,p1->coef,p1->expont);
			p1 = p1->link;
		}
		else if(p1->expont < p2->expont)
		{
			CircularListPolyAttach(&p3_tail,p2->coef,p2->expont);
			p2 = p2->link;
		}
		else if(p1->expont == p2->expont)
		{
			if(p1_head==p1)
				ok = 1;
			sum = p1->coef + p2->coef;
			if(sum!=0){
				CircularListPolyAttach(&p3_tail,sum,p1->expont);
			}
			p1 = p1->link;
			p2 = p2->link;
		}
	}while(ok!=1);
	
	p3_tail->link = p3; 
	return p3;
}

//printpoly
void printpoly(node_p p)
{
	p = p->link;
	while(p->expont != -1)
	{
		if(p->expont != 0){
			printf("%.0fx^%d",p->coef,p->expont);
			printf(" + ");
		}
		else
			printf("%.0f.",p->coef);
		p = p->link;
	}
	printf("\n");
}

int main(){
	
	node_p F,F_tail,G,G_tail,H;
	avail = NULL;

	/* CREATE F POLY */

	F = GetNode();
	F-> expont = -1;
	F-> link = F;
	F_tail = F;

	/* SET F CONTENT */
	CircularListPolyAttach(&F_tail,5,1000);
	CircularListPolyAttach(&F_tail,7,387);
	CircularListPolyAttach(&F_tail,10,0);
	
	printf("F(x) = "); printpoly(F);	 // print(F)

	/* CREATE G POLY */

	G = GetNode();
	G-> expont = -1;
	G-> link = G;
	G_tail = G;

	/* SET F CONTENT */
	CircularListPolyAttach(&G_tail,10,400);
	CircularListPolyAttach(&G_tail,6,387);
	CircularListPolyAttach(&G_tail,3,2);
	CircularListPolyAttach(&G_tail,1,0);
	
	printf("G(x) = "); printpoly(G);	 // print(F)

	/* CALCULATE H = F + G */ 
	H = CircularListPolyAdd(F,G);
			printf("H(x) = F(x) + G(x) = "); printpoly(H);	 // print(F)

	/* RECYLE POLY LINKED-LIST */
	NewCircularListErase(&F);
	NewCircularListErase(&G);
	NewCircularListErase(&H);

	return 0;
}









