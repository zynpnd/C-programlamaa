#include <stdio.h>
#include <stdlib.h>
#define n 10
int main()
{
    int eskiSayi, yeniSayi, minFark, maxFark, toplam = 0, fark;
    double ort;
    int i;

    printf("1. sayiyi giriniz: ");
    scanf("%d", &eskiSayi);

    for(i=1;i<n;i++)
    {
        printf("%d. sayiyi giriniz: ", i+1);
        scanf("%d", &yeniSayi);
        fark = yeniSayi - eskiSayi;
        if(i==1)
        {
            minFark = fark;
            maxFark = fark;
        }
        else
        {
            if(fark > maxFark)
                maxFark = fark;
            if(fark < minFark)
                minFark = fark;
        }

        toplam += fark;
        eskiSayi = yeniSayi;
    }

    ort = (double)toplam/(n-1);

    printf("Min fark: %d\n", minFark);
    printf("Max fark: %d\n", maxFark);
    printf("Ort fark: %.2f\n", ort);

    return 0;
}
