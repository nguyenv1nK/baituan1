#include <stdio.h>
#include <stdlib.h>
main()
{   int n,t=0,i;
  while(1)
  {printf("\nNhap quang duong (m):");
    scanf("%d",&n);
   for(i=0;i<=n;i++)
   {if (i<=1000)
       t=10000;
   else
    if(i>1000&&i<=30000)
    t+=1500/200;
   else
    if(i>30000)
    t+=8;
   }
    printf("\n So tien : %d VND",t);}
    getch();
}
