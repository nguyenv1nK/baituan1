#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{   int i,s,j,t;
    char a[100];
    printf("Nhap day :");
	gets(a);
	s=strlen(a);
    for(i=0;i<s;i++)
	{   if ('a'<=a[0]&&a[0]<='z')
            a[0]=a[0]-32;
       else if(a[i-1]!='.'&&'A'<=a[i+1]&&a[i+1]<='Z')
            a[i+1]=a[i+1]+32;
       else if(a[0]==32)
            {xoa(a,0);s--;i--;}
       else if(a[s-1]==32)
            {xoa(a,s-1);s--;i--;}
      else  if(a[i]==32&&a[i+1]==32)
            {xoa(a,i);s--;i--;}
      else  if(a[i]==','&&a[i+1]==',')
            {xoa(a,i);s--;i--;}
      else  if(a[i]=='.'&&a[i+1]=='.')
            {xoa(a,i);s--;i--;}
     else   if(a[i]==32&&a[i+1]==',')
            {xoa(a,i);s--;i--;}
     else  if(a[i]==32&&a[i+1]==',')
            {xoa(a,i);s--;i--;}
     else   if(a[i]==32&&a[i+1]=='.')
            {xoa(a,i);s--;i--;}
      else  if(a[i+1]!=32&&a[i]==',')
            {them(a,i+1,' ');s++;i--;}
     else   if(a[i+1]!=32&&a[i]=='.')
            {them(a,i+1,' ');s++;i--;}
	}
	for(t=0;t<s;t++)
	{printf("%c",a[t]);}
    getch();
}
    void xoa(char a[], int vitrixoa)
{   int j,s=strlen(a);
    for(j=vitrixoa+1;j<s;j++)
    {
        a[j-1]=a[j];
    }
    a[s]='\0';

}
   void them(char a[], int vitrithem,char kituthem)
{   int k,s=strlen(a);
    for(k=s-1;k>=vitrithem;k--)
    {
        a[k+1]=a[k];
    }
    a[vitrithem]=kituthem;
    a[s+1]='\0';

}

