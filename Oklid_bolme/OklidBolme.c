#include <stdio.h>
#include <stdlib.h>
//OKLID BOLME ALGORITMASI

int hesaplama(int x,int y)
{
    int r;
    while(y != 0)
    {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}
int main()
{
    int sayi1,sayi2,sonuc;
    printf("\t1.Sayi:");
    scanf("%d",&sayi1);
    printf("\t2.Sayi:");
    scanf("%d",&sayi2);
    sonuc=  hesaplama(sayi1,sayi2);
    printf("\n Ebob ( %d , %d ): %d",sayi1,sayi2,sonuc);
    return 0;
}
