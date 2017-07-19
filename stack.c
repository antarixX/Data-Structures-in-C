// Creating a Stack data structure
#include<stdio.h>
#include<conio.h>

#define MAX 5

struct stack {
	int arr[MAX];
	int top;
};

void push(struct stack *s,int item) {
	if((s->top)==(MAX-1)) {
		printf("\nStack is FULL!\n");
		return;
	}
	(s->top++);
	(s->arr[s->top])=item;
}

int pop(struct stack*s) {
	int data;
	if(s->top==-1) {
		printf("\nStack is EMPTY!\n");
		return NULL;
	}
	data=s->arr[s->top];
	(s->top)--;
	return data;
}

void initial(struct stack *s) {
	s->top=-1;
}

void display(struct stack*s) {
	int i;
	printf("\nStack : \n");
	for(i=(s->top);i>-1;i--)
	printf("%d\n",s->arr[i]);
}

main() {
	struct stack s;
	initial(&s);
	printf("Push 10\n");push(&s,10);
	printf("Push 20\n");push(&s,20);
	printf("Push 30\n");push(&s,30);
	printf("Push 40\n");push(&s,40);
	printf("Push 50\n");push(&s,50);
	display(&s);
	printf("\nPush 60\n");push(&s,60);
	printf("\nPoped Item is : %d\n",pop(&s));
	printf("Poped Item is : %d\n",pop(&s));
	printf("\nPush 70\n");push(&s,70);
	display(&s);
	getch();
}
