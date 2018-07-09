#include <conio.h>
#include <stdio.h>
int ucln(int a,int b)
{
if(a==b)
        return a;
else
    if (a>b)
    return ucln(a-b,b);
else
    return ucln(a,b-a);}
main()
{   int a,b;
    printf("\n Nhap vao cac so a,b:");
    printf("\na=");
    scanf("%d",&a);
    printf("\nb=");
    scanf("%d",&b);
    printf("\n Uoc chung lon nhat:%d",ucln(a,b));
    printf("\n Boi chung nho nhat: %d",a*b/ucln(a,b));
    getch();
}
