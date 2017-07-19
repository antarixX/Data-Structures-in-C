// Copying data from a file
#include<stdio.h>

void main()
{
	FILE *f1,*f2;
	char c;
	printf("\nEnter data in the file :\n");
	f1=fopen("F1.txt","w");
	while((c=getchar())!=EOF) {
		putc(c,f1);
	}
	fclose(f1);
	f1=fopen("F1.txt","r");
	f2=fopen("F2.txt","w");
	while((c=getc(f1))!=EOF) {
		putc(c,f2);
	}
	fclose(f1);
	fclose(f2);
}
