#include <stdio.h>
int main()
{
    int n,a,b,c,doi;
    printf("Nhap");
    scanf("%d",&n);
    a=n/100;
    b=((n%100)/10);
    c=n%10;
    if(a<b){
        doi =a;
        a=b;
        b=doi;

    }
    if(b<c){
        b = doi;
        b=c;
        c = doi;}

     if(a<b){
        doi =a;
        a=b;
        b=doi;

    }
  printf(" %d%d%d", a,b,c);
}
