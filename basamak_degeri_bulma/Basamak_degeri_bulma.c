#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kullanicidan alinacak maksimum 6 basamakli pozitif tam sayinin kac basamakli oldugunu ve sayinin basamak degerini icerisinde minimum
   // degerin hangi basamakta oldugunu bulan ve ekrana yazdiran C programini yaziniz.
   int sayi,kacbasamak=1,basamak,enkucuk=10,enkucuk_basamak;
   printf("sayi:");
   scanf("%d",&sayi);
    if (sayi>999999)
    {
       printf("yanlis sayi");
        return 0;
    }
    while(sayi>0)
    {
        basamak=sayi%10;
        sayi/=10;
    if(basamak<enkucuk)
    {
     enkucuk=basamak;
     enkucuk_basamak=kacbasamak;
    }
    }
    printf("En kucuk %d lerbasamagi,enkucuk %d sayisi",enkucuk_basamak,enkucuk);
    return 0;
}
