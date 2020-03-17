#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

//a mod m nin tersi olup olmadigini belirler ve tersini ekrana yazdirir

void hesaplama(int a,int m)
{
    int t0=0,t=1,r,temp;
    double q;
    int m2 = m;
    int a2 = a;
    q= floor(m2/a2);// yuvarlama
    r=m2-q*a2;
    while(r > 0)
    {
        temp=t0-q*t;
        if(temp >= 0)
        {
            temp = temp % m;
        }
        else
        {
            temp = m-((-temp) % m);
        }
        t0=t;
        t=temp;
        m2=a2;
        a2=r;
        q= floor(m2/a2);// yuvarlama
        r=m2-q*a2;
    }
    if(a2 != 1)
    {
        printf("%d nin modul %d de tersi yok.",a,m);
        return ;
    }
    else
    {
        int sonuc = t % m;
        printf("Sonuc: %d",sonuc);
    }

}

int main()
{
    int sayi1,sayi2;
    printf("Sayi girin :");
    scanf("%d",&sayi1);
    printf("Modul degerini girin:");
    scanf("%d",&sayi2);
    hesaplama(sayi1,sayi2);

    return 0;
}
