//creating a queue data structure
#include<stdio.h>
#include<conio.h>
#define MAX 10
void addq(int*,int,int*,int*);
int delq(int*,int*,int*);
void displayq(int*,int);
void main()
{
	int arr[MAX];
	int front=-1,rear=-1,i;
	printf("\nQue Using Arrays :\n\nAdd 30\n");
	addq(arr,30,&front,&rear);
	printf("Add 40\n");
	addq(arr,40,&front,&rear);
	printf("Add 50\n");
	addq(arr,50,&front,&rear);
	printf("Add 60\n");
	addq(arr,60,&front,&rear);
	printf("Add 70\n");
	addq(arr,70,&front,&rear);
	displayq(arr,&front,&rear);
	i=delq(arr,&front,&rear);
	printf("\nDeleted Item is : %d\n",i);
	displayq(arr,&front,&rear);
	printf("\nAdd 80\n");
	addq(arr,80,&front,&rear);
	printf("Add 90\n");
	addq(arr,90,&front,&rear);
	displayq(arr,&front,&rear);
	getch();
}
void addq(int*ary,int item,int*pfront,int*prear)
{
	if(*prear==MAX-1)
	{printf("Que is Full!");return;}
(*prear)++;
ary[*prear]=item;
if(*pfront==-1)
	(*pfront)++;
}

int delq(int*ary,int*pfront,int*prear)
{
	int data;
	if(*pfront==-1)
	{printf("Que is Empty!");return NULL;}
	data=ary[*pfront];
	ary[*pfront]=0;
	if(*pfront==*prear)
	{*pfront=*prear=-1;}
	else
		(*pfront)++;
	return data;
}

void displayq(int*ary,int*pfront,int*prear)
{int i;
printf("\nQue :\n");
	for(i=*pfront;i<=*prear;i++)
	{printf("%d	",ary[i]);}
	printf("\n");
}
