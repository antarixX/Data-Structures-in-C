// Insertion Sort Impllementation
#include<stdio.h>
#include<conio.h>

void insertsort(int [],int);

void main() {
	int n,i,a[50];
	printf("\t\t\tINSERTION SORT\n\nHow many elements do you wish to enter? : ");
	scanf("%d",&n);
	printf("\nEnter the elements one by one:\n");
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
	printf("\n\nBefore Sorting:\n\n");
	for(i=0;i<=n-1;i++)
		printf("%d\t",a[i]);
	insertsort(a,n);
	getch();	
}

void insertsort(int x[],int size) {
	int i,k,y;
	for(k=1;k<size;k++) {
		y=x[k];
		for(i=k-1;i>=0 && y<x[i];i--)
			x[i+1]=x[i];
		x[i+1]=y;
	}
	printf("\n\nAfter Sorting:\n\n ");
	for(i=0;i<=size-1;i++)
		printf("%d\t",x[i]);
}
