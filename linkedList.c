// linked list data structure
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node*link;
};

void append(struct node**q,intnum) {
	struct node *temp,*r;
	if(*q==NULL) {
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=num;
		temp->link=NULL;
		*q=temp;
	} else {
		temp=*q;
		while(temp->link!=NULL)
		{temp=temp->link;}
		r=(struct node*)malloc(sizeof(struct node));
		r->data=num;
		r->link=NULL;
		temp->link=r;
	}
}

void addatbeg(struct node**q,intnum) {
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=num;
	temp->link=*q;
	*q=temp;
}

void addafter(struct node*q,intloc,intnum) {
	struct node*temp,*r;
	int i;
	temp=q;
	for(i=1;i<loc;i++) {
		temp=temp->link;
		if(temp->link==NULL)
			printf("\nThere are %d nodes in the linked list",loc);
		return;
	}
	r=(struct node*)malloc(sizeof(struct node));
	r->data=num;
	r->link=temp->link;
	temp->link=r;
}

void delete_node(struct node**q,intnum) {
	struct node*temp,*old;
	temp=old=*q;
	while(temp!=NULL) {
		if(temp->data==num) {
			if(temp==*q)
				*q=temp->link;
			else
				old->link=temp->link;
				free(temp);
				return;
		} else {
			old=temp;
			temp=temp->link;
		}
	}
}

void display(struct node*q) {	
	printf("\n");
	while(q!=NULL) {
		printf("%d -> ",q->data);
		q=q->link;}
	}

int count(struct node*q) {
	int c=0;
	while(q!=NULL) {
		q=q->link;
		c++;
	}
	return c;
}

void main() {
	struct node*p;
	p=NULL;
	printf("\nThere are %d elements in the linked list.\n",count(p));
	printf("\nAddingelemnts to the linked list :");
	append(&p,14);
	append(&p,30);
	append(&p,25);
	append(&p,42);
	append(&p,17);
	display(p);
	printf("\n\nAddingelemnts in the beginning of the linked list :");
	addatbeg(&p,999);
	addatbeg(&p,888);
	addatbeg(&p,777);
	display(p);
	printf("\n\nAddingelemnts to the linked list at specified locations:");
	addafter(p,7,0);
	addafter(p,2,1);
	addafter(p,5,99);
	display(p);
	printf("\n\nThere are %d elements in the linked list.\n",count(p));
	printf("\nDeletingelemnts from the linked list :");
	delete_node(&p,99);
	delete_node(&p,1);
	delete_node(&p,10);
	display(p);
	printf("\n\nThere are %d elements in the linked list.",count(p));
	getch();
}
