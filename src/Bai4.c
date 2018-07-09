
#include <stdio.h>
 main()
 {
     int n,i,j;
     printf("Nhap so n:");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         printf("\n");
         for (j=0;j<n+i;j++)
         { if (j<n-1-i)
             printf("\t ");
             else
                printf("\t*");
         }
     }
     getch();
 }
