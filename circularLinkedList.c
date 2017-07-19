//Problem:
//A group of soldiers are surrounded by enemy fleat
//Only one soldier can go to call reinforcements as there is 
//only one horse.
//Following program simulates the selection of one soldier
//using circular linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};

void main()
{
	struct node *temp,*first,*old;
	int m,n,i;
	printf("\nEnter the number of soldiers : ");
	scanf("%d",&n);
	printf("\nEnter the interval : ");
	scanf("%d",&m);
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=1;
	first=temp;
	old=temp;
	for(i=2;i<=n;i++) {
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=i;
		old->next=temp;
		old=old->next;
	}
	temp->next=first;
	while(temp!=temp->next) {
		for(i=1;i<=m;i++)
			temp=temp->next;
		old=temp->next;
		temp->next=old->next;
		printf("\nDeleting %d\n",old->data);
		free(old);
	}
	printf("\nLast node is %d",temp->data);
	getch();
}
