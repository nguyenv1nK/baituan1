#include <stdio.h>
#include<conio.h>
main()
{
    while(1)
  {int a,b,c;
    printf("\n\nNhap vao ngay thang nam:");
    printf("\nNgay:");
    scanf("%d",&a);

    printf("\nThang:");
    scanf("%d",&b);

    printf("\nNam:");
    scanf("%d",&c);

    if(b<=0||b>12)
        {
        printf("\n Khong hop le !");
        }
        else
          {
              if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
          {
            if (0<a&&a<32)
                {
                    printf("%d/%d/%d",a,b,c);
                     if(c%4==0)
                printf("\nDay la nam nhuan");
            else
                printf("\nDay khong phai nam nhuan");

                }

            else
                printf("Khong hop le!");
        }
        else
            if(b==2&&c%4==0)
            {
                if(0<a&&a<30)
           {
            printf("%d/%d/%d",a,b,c);
            printf("\nDay la nam nhuan");

           }
                else
            printf("\nKhong hop le!");
            }
            if(b==2&&c%4!=0)
            {
                if(0<a&&a<29)
            {
            printf("\n%d/%d/%d",a,b,c);
            printf("\nDay khong phai nam nhuan");

            }
            else
            printf("\n Khong hop le!");
            }
            else
            if(b==4||b==6||b==9||b==11)
            {
                if (0<a&&a<31)
               {

                printf("\n%d/%d/%d",a,b,c);
               if(c%4==0)
                printf("\nDay la nam nhuan");
                else
                printf("\nDay khong phai nam nhuan");
                }
                else
                printf("\nKhong hop le ");
            }


}
    getch();
  }
}
