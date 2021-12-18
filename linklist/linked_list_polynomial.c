#include<stdio.h>
#include<stdlib.h>

struct polynomialnode
{
	double coef;
	int expont;
	struct polynomialnode *link;
};
typedef struct polynomialnode P_Node;
typedef P_Node  *P_Node_P;

void attach(P_Node_P*,double,int);

P_Node_P polyadd(P_Node_P,P_Node_P);
void printpoly(P_Node_P);
void erasepoly(P_Node_P);

int main()
{
	P_Node_P F, F_head, F_tail, G, G_head, G_tail, H;	
	
	//********************* BUILD F **********************//

	F_tail = (P_Node_P)malloc(sizeof(P_Node));
	if(F_tail == NULL){	printf("out of memory!"); exit(1);}
	
	F_head = F_tail;
	
	attach(&F_tail,5,1000);
	attach(&F_tail,7,387);
	attach(&F_tail,10,0);
	
	F = F_head -> link;
	free(F_head);
	
	printf("F(x) = "); printpoly(F); //print f function element
	
	//********************* BUILD G **********************//
	
	G_tail = (P_Node_P)malloc(sizeof(P_Node));
	if(G_tail == NULL){	printf("out of memory!"); exit(1);}
	
	G_head = G_tail;
	
	attach(&G_tail,10,400);
	attach(&G_tail,6,387);
	attach(&G_tail,3,2);
	attach(&G_tail,1,0);

	
	G = G_head -> link;
	free(G_head);
	
	printf("G(x) = "); printpoly(G); //print f function element

	//********************* CALCULATE H **********************//
	
	H = polyadd(F,G);
	printf("H(x) = "); printpoly(H); //print f function element

	erasepoly(F);
	erasepoly(G);
	erasepoly(H);

	return 0;
}

void attach(P_Node_P *rear, double coef, int expont)
{
	P_Node_P newnode_p = (P_Node_P)malloc(sizeof(P_Node));
 	if( newnode_p == NULL){
		printf("out of memory!");
		exit(1);
	}
	newnode_p -> coef = coef;
	newnode_p -> expont = expont;

	(*rear)->link = newnode_p;
	(*rear) = newnode_p;
	(*rear)->link = NULL;
}

P_Node_P polyadd(P_Node_P p1,P_Node_P p2)
{
	P_Node_P p3 = NULL, head = NULL, tail = NULL;

	if((p1==NULL)&&(p2==NULL)){
		return p3;		
	}
	tail = (P_Node_P)malloc(sizeof(P_Node));
	if(tail == NULL){
		printf("out of memory!");
		exit(1);
	}
	tail -> link = NULL;
	p3 = head = tail;

	while((p1!=NULL) && (p2!=NULL))
	{
		if(p1->expont > p2->expont)
		{
			attach(&tail,p1->coef,p1->expont);
			p1 = p1->link;
		}
		else if (p1->expont < p2->expont)
		{
			attach(&tail,p2->coef,p2->expont);
			p2 = p2->link;
		}
		else if (p1->expont == p2->expont)
		{
			if((p1->coef + p2->coef)!= 0){
				attach(&tail,p1->coef+p2->coef,p1->expont);
			}
			p1 = p1->link;
			p2 = p2->link;
		}

	}
	while(p1!=NULL){
		attach(&tail,p1->coef,p1->expont);
		p1 = p1->link;
	}
	while(p2!=NULL){
		attach(&tail,p2->coef,p2->expont);
		p2 = p2->link;
	}
	p3 = head->link; 
	free(head);
	return p3;
}

void printpoly(P_Node_P p)
{
	while(p!=NULL)
	{
		if(p->expont!=0)
		{
			printf("%.0fx^%d",p->coef,p->expont);
			printf(" + ");
		}
		else
		{
			printf("%.0f.",p->coef);
		}
		p = p->link;
	}
	printf("\n");
}

void erasepoly(P_Node_P p)
{
	P_Node_P freeone;
	while(p!=NULL){
		freeone = p;
		p = p->link;
		free(freeone);
	}
}


















