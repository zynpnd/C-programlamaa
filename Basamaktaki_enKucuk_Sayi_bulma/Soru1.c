#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int basamakSayisi = 0, kalan, minSayi = 9;
    int minBasamak = 0, basamakDegeri = 1;
    int temp;
    printf("Pozitif bir sayi giriniz:");
    scanf("%d", &sayi);
    temp = sayi;
    while(sayi>0)
    {
        kalan = sayi%10;
        if(kalan < minSayi)
        {
            minSayi = kalan;
            minBasamak = basamakDegeri;
        }
        basamakSayisi++;

        sayi = sayi/10;
        basamakDegeri*=10;
    }

    printf("%d sayisinin basamak sayisi= %d", temp, basamakSayisi);
    printf("\nminBasamak= %d\nMin basamak degeri= %d\n", minSayi, minBasamak);

    return 0;
}
