// Writing data to a file
#include<stdio.h>

void main()
{
	FILE *f1;
	char c;
	printf("\nEnter data in the file :\n");
	f1=fopen("F1.txt","w");
	while((c=getchar())!=EOF) {
		putc(c,f1);
	}
	fclose(f1);
}
