#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{   int h=0,t=0,i,d;
    char a[100];
    printf("Nhap day :");
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
	    if('A'<=a[i]&&a[i]<='Z')
	    h++;
	    else
	    if('a'<=a[i]&&a[i]<='z')
	    t++;
	}
	printf("\nSo ki tu hoa: %d",h);
	printf("\nSo ki tu thuong: %d",t);
	getch();
}

