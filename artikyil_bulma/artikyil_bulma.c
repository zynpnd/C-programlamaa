#include <stdio.h>
#include <stdlib.h>
int main()
{
   //klavyeden girilen y�l�n art�k y�l olup olmad�g�n� bulan program.
   //yil 4 e b�l�necek/100 eb�l�nmeyecek veya 400 e direk b�l�necek.
   //5.12.2017
   int artik_yil(int yil);
   int yil;
    printf("bir yil giriniz:");
    scanf("%d",&yil);

     if(artik_yil(yil))
        printf("%d artik yil\n",yil);
     else
        printf("%d artik yil degil\n",yil);
    return 0;
}
int artik_yil(int yil)
{
    if ((yil%4==0 && yil%100!=0)|| (yil%400==0))
        return 1;
    else
        return 0;
}
