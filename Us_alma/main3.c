#include <stdio.h>
#include <stdlib.h>
//mod m de us alma
int Hesaplama(int a,int k,int m)
{
    int sonuc=1;
    while(k != 0)
    {
        if(k % 2 == 1)
        {
            sonuc = (sonuc * a) % m;
            k = k - 1;
        }
        else // k%2==0
        {
            a = (a * a) % m;
            k = k / 2;
        }
    }
    return sonuc;
}
int main()
{
    int sayi1,sayi2,sayi3;
    printf("Taban sayisini giriniz :");
    scanf("%d",&sayi1);//a
    printf("Us sayisini giriniz :");
    scanf("%d",&sayi2);//k
    if(sayi2 < 0 )
    {
        printf("Us sayisi 0 dan buyuk bir deger olmalidir.");
        return 0;
    }
    printf("Mod sayisini giriniz:");
    scanf("%d",&sayi3);//m
    int sonuc =Hesaplama(sayi1,sayi2,sayi3);
    printf("%d ^ %d mod %d: %d",sayi1,sayi2,sayi3,sonuc);

    return 0;
}
