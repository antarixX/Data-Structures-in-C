//Bubble sort implementation
#include<conio.h>
#include<stdio.h>

#define MAX 40

void sort(int *a,int x) {
	int t,i,j;
	for(i=0;i<x;i++){ 
		for(j=0;j<x-i-1;j++) {
			if(a[j]>a[j+1]) {
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}	
		}
	}

	printf("\nSorted array :\n");

	for(i=0;i<x;i++) {
		printf("%d	",a[i]);}
		printf("\n");
}

void search(int*a,int x) {
	int s,i,low=0,high=(x-1),mid;
	printf("Enter the element to be searched : ");
	scanf("%d",&s);

	for(i=0;high>=low;i++) {
		mid=(low+high)/2;
		if(s>a[mid])
			low=mid+1;
		else if(s==a[mid]) {
			printf("\n\nElement found at location : %d",mid+1);return;}
		else if(s<a[mid])
			high=mid-1;
	}

	printf("\n\nElement not found!");
}

void main() {
	int ary[MAX],i,n;
	printf("How many elements : ");
	scanf("%d",&n);
	printf("Enter the elements one by one :\n");
	for(i=0;i<n;i++) {
		scanf("%d",&ary[i]);
	}
	sort(ary,n);
	search(ary,n);
	getch();
}
