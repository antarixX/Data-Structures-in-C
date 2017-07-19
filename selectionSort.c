//Selection sort Implemenation
#include<stdio.h>
#include<conio.h>
#define MAX 50

void selectsort(int x[],int n)
{
	int i,indx,j,large;
	for(i=n-1;i>0;i--) {
		large=x[0];
		indx=0;
		for(j=1;j<=i;j++)
			if(x[j]>large) {
			large=x[j];
			indx=j;
			}
		x[indx]=x[i];
		x[i]=large;
	}
	printf("\n\nSorted Array:\n");
	for(i=0;i<n;i++) {
		printf("%d	",x[i]);
	}
}

void main()
{
	int i,n,ary[MAX];
	printf("\t\t\tSELECTION SORT\n\nHow many elements do you want to enter? : ");
	scanf("%d",&n);
	printf("\nEnter elements one by one:\n");
	for(i=0;i<n;i++) {
		scanf("%d",&ary[i]);
	}
	printf("\nArray:\n");
	for(i=0;i<n;i++) {
		printf("%d	",ary[i]);
	}
	selectsort(ary,n);
	getch();
}
